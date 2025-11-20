// Last updated: 2025/11/20 下午1:29:19


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int *ans = malloc(numsSize * sizeof(int));
    for (int i = 0; i < n; i++) {
        ans[i * 2] = nums[i];
        ans[i * 2 + 1] = nums[i + n];
    }
    return ans;
}