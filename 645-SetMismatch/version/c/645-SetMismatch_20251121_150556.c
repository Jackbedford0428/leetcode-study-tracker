// Last updated: 2025/11/21 下午3:05:56
int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    memset(result, 0, (*returnSize) * sizeof(int));
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            result[0] = nums[i];  // 重複的數字
            break;
        }
    }
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    int expected_sum = numsSize * (numsSize + 1) / 2;
    result[1] = expected_sum - (sum - result[0]);
    return result;
}