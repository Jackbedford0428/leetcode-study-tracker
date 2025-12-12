// Last updated: 2025/12/12 上午9:29:22
1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
5    for (int i = 0; i < numsSize; i++) {
6        if (nums[abs(nums[i]) - 1] > 0) {
7            nums[abs(nums[i]) - 1] *= -1;
8        }
9    }
10    int *result = malloc(numsSize * sizeof(int));
11    *returnSize = 0;
12    for (int i = 0; i < numsSize; i++) {
13        if (nums[i] > 0) {
14            result[(*returnSize)++] = i + 1;
15        }
16    }
17    return result;
18}