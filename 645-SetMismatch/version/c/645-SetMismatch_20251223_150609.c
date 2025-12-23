// Last updated: 2025/12/23 下午3:06:09
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4typedef struct {
5    int key;
6    UT_hash_handle hh;
7} Entry;
8
9int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
10    Entry* table = NULL;
11    for (int i = 0; i < numsSize; ++i) {
12        Entry* e = NULL;
13        HASH_FIND_INT(table, &nums[i], e);
14        if (e == NULL) {
15            e = malloc(sizeof(Entry));
16            e->key = nums[i];
17            HASH_ADD_INT(table, key, e);
18        }
19    }
20    int* ans = malloc(numsSize * sizeof(int));
21    *returnSize = 0;
22    for (int i = 1; i <= numsSize; ++i) {
23        Entry* e = NULL;
24        HASH_FIND_INT(table, &i, e);
25        if (e == NULL) {
26            ans[(*returnSize)++] = i;
27        }
28    }
29    Entry* cur, *tmp;
30    HASH_ITER(hh, table, cur, tmp) {
31        HASH_DEL(table, cur);
32        free(cur);
33    }
34    return ans;
35}