// Last updated: 2025/11/21 下午2:38:57
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result[0] = abs(nums[i]);  // 已經是負數，表示重複
        } else {
            nums[index] = -nums[index];  // 標記為負數
        }
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            result[1] = i + 1;  // 缺失的數字
            break;
        }
    }
    
    return result;
}