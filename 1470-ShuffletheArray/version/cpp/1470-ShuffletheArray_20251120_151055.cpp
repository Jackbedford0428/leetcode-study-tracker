// Last updated: 2025/11/20 下午3:10:55
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // 寫法 1: 傳統 for 迴圈交錯賦值 (Traditional indexed for loop with interleaving)
        // ✅✅✅ Idiomatic: C++ 最常見的寫法，清晰直觀
        // ⚡⚡⚡ Performance: 最快（現代編譯器優化佳）
        vector<int> ans(n * 2);
        for (int i = 0; i < n; i++) {
            ans[2 * i] = nums[i];
            ans[2 * i + 1] = nums[i + n];
        }
        return ans;
        
        // 寫法 2: 使用 reserve + push_back
        // ✅✅ Idiomatic: STL 風格
        // ⚡⚡ Performance: 中等（push_back 有輕微開銷）
        // vector<int> ans;
        // ans.reserve(n * 2);
        // for (int i = 0; i < n; i++) {
        //     ans.push_back(nums[i]);
        //     ans.push_back(nums[i + n]);
        // }
        // return ans;
        
        // 寫法 3: 函數式風格（較少用）
        // ⚠️ Idiomatic: 過於複雜
        // ⚡ Performance: 較慢
        // vector<int> ans(n * 2);
        // int idx = 0;
        // for (const auto& num : nums) {
        //     if (idx < n) {
        //         ans[idx * 2] = num;
        //     } else {
        //         ans[(idx - n) * 2 + 1] = num;
        //     }
        //     idx++;
        // }
        // return ans;
    }
};
