// Last updated: 2025/11/21 下午2:42:05
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    int* count = (int*)calloc(numsSize + 1, sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    
    for (int i = 1; i <= numsSize; i++) {
        if (count[i] == 2) {
            result[0] = i;  // 重複的數字
        }
        if (count[i] == 0) {
            result[1] = i;  // 缺失的數字
        }
    }
    
    free(count);
    return result;
}