// Last updated: 2025/11/25 上午10:29:11
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    int count[101];
    memset(count, 0, sizeof(count));
    
    // 統計每個數字出現次數
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    
    // 累加計數：count[i] 變成「小於等於 i 的數字總數」
    for (int i = 1; i <= 100; i++) {
        count[i] += count[i - 1];
    }
    
    // 建立結果
    for (int i = 0; i < numsSize; i++) {
        result[i] = (nums[i] > 0) ? count[nums[i] - 1] : 0;
    }
    
    return result;
}