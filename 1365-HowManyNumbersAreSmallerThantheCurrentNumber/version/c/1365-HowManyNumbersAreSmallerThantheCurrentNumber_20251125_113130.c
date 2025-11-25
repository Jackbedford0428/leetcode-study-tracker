// Last updated: 2025/11/25 上午11:31:30
// Sorting solution 用到的 struct 和比較函式
typedef struct {
    int value;
    int index;
} Pair;

int comparePair(const void* a, const void* b) {
    return ((Pair*)a)->value - ((Pair*)b)->value;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    Pair* pairs = (Pair*)malloc(numsSize * sizeof(Pair));
    
    // 建立 value-index pairs
    for (int i = 0; i < numsSize; i++) {
        pairs[i].value = nums[i];
        pairs[i].index = i;
    }
    
    // 按值排序
    qsort(pairs, numsSize, sizeof(Pair), comparePair);
    
    // 計算每個位置有多少個更小的數
    for (int i = 0; i < numsSize; i++) {  // i 是排序後的索引，相當於 rank
        // 如果與前一個值相同，沿用前一個的計數
        if (i > 0 && pairs[i].value == pairs[i - 1].value) {
            result[pairs[i].index] = result[pairs[i - 1].index];
        } else {
            result[pairs[i].index] = i;
        }
    }
    
    free(pairs);
    return result;
}