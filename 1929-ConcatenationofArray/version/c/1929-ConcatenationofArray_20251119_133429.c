// Last updated: 2025/11/19 下午1:34:29
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));

    // 寫法 1: memcpy 系統呼叫 (System-level memory copy)
    // ✅ Idiomatic: C 語言處理陣列複製的標準做法
    // ⚡⚡⚡ Performance: 最快（系統級批次記憶體操作，無迴圈開銷）
    memcpy(ans, nums, numsSize * sizeof(int));
    memcpy(ans + numsSize, nums, numsSize * sizeof(int));

    // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
    // ✅ Idiomatic: 是 C 語言最標準的寫法
    // ⚡ Performance: 中等（有邊界檢查與索引運算）
    // for (int i = 0; i < numsSize; i++) {
    //     ans[i] = nums[i];
    //     ans[i + numsSize] = nums[i];
    // }
    
    // 補充寫法 3: 使用指標遞增 (Pointer arithmetic)
    // ✅ Idiomatic: 老派 C 風格，較少見於現代程式碼
    // ⚡⚡ Performance: 快（減少陣列索引運算）
    // int *p = ans;
    // for (int i = 0; i < numsSize; i++) {
    //     *p++ = nums[i];
    // }
    // for (int i = 0; i < numsSize; i++) {
    //     *p++ = nums[i];
    // }
    
    return ans;
}
