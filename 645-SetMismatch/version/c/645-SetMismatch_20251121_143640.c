// Last updated: 2025/11/21 下午2:36:40
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    int n = numsSize;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    long long expected_square_sum = (long long)n * (n + 1) * (2 * n + 1) / 6;
    long long actual_square_sum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        actual_sum += nums[i];
        actual_square_sum += (long long)nums[i] * nums[i];
    }
    
    int diff_xy = actual_sum - expected_sum;  // x - y
    long long square_diff_xy = actual_square_sum - expected_square_sum;  // x² - y² = (x - y)(x + y)
    int sum_xy = square_diff_xy / diff_xy;  // x + y
    
    result[0] = (sum_xy + diff_xy) / 2;  // x (重複)
    result[1] = sum_xy - result[0];      // y (缺失)
    return result;
}