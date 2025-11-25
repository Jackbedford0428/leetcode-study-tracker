// Last updated: 2025/11/25 上午10:29:35
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        result[i] = count;
    }
    
    return result;
}