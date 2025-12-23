// Last updated: 2025/12/23 下午3:04:15
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4static void swap(int* a, int* b) {
5    int tmp = *a;
6    *a = *b;
7    *b = tmp;
8}
9
10int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
11    int i = 0;
12    while (i < numsSize) {
13        int correct = nums[i] - 1;
14        if (nums[i] != nums[correct]) {
15            swap(&nums[i], &nums[correct]);
16        } else {
17            i++;
18        }
19    }
20    int* ans = malloc(numsSize * sizeof(int));
21    *returnSize = 0;
22    for (int idx = 0; idx < numsSize; ++idx) {
23        if (nums[idx] != idx + 1) {
24            ans[(*returnSize)++] = idx + 1;
25        }
26    }
27    return ans;
28}