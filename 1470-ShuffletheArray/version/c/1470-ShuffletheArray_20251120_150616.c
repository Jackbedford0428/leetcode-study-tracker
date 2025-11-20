// Last updated: 2025/11/20 下午3:06:16
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    // 寫法 1: 傳統 for 迴圈交錯賦值 (Traditional for loop with interleaving)
    // ✅✅✅ Idiomatic: C 語言最標準的寫法
    // ⚡⚡⚡ Performance: 最快（直接記憶體操作）
    *returnSize = numsSize;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < n; i++) {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }
    return ans;
    
    // 寫法 2: 單次迴圈 push 方式（模擬 append）
    // ✅ Idiomatic: C 語言可接受的寫法
    // ⚡⚡ Performance: 中等（需要維護索引）
    // *returnSize = numsSize;
    // int* ans = (int*)malloc((*returnSize) * sizeof(int));
    // int idx = 0;
    // for (int i = 0; i < n; i++) {
    //     ans[idx++] = nums[i];
    //     ans[idx++] = nums[i + n];
    // }
    // return ans;
}
