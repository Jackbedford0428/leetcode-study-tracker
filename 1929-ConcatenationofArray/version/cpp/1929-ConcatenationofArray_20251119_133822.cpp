// Last updated: 2025/11/19 下午1:38:22
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // 寫法 1: 使用 insert 方法 (STL iterator-based)
        // ✅✅✅ Idiomatic: 最符合現代 C++ STL 風格
        // ⚡⚡⚡ Performance: 最快（連續記憶體操作，編譯器優化佳）
        vector<int> ans(nums);
        ans.insert(ans.end(), nums.begin(), nums.end());

        // 寫法 1-1: 使用 reserve 方法 (STL vector reserve)
        // vector<int> ans;
        // ans.reserve(nums.size() * 2);
        // ans.insert(ans.end(), nums.begin(), nums.end());
        // ans.insert(ans.end(), nums.begin(), nums.end());

        // 寫法 2: 傳統 index-based for 迴圈 (Traditional indexed for loop)
        // ✅ Idiomatic: C++ 最常見的寫法，清晰直觀
        // ⚡⚡ Performance: 中等（現代編譯器會優化）
        // int n = nums.size();
        // vector<int> ans(n * 2);
        // for (int i = 0; i < n; i++) {
        //     ans[i] = nums[i];
        //     ans[i + n] = nums[i];
        // }

        // 寫法 3: std::copy 演算法 (Algorithm library)
        // ✅ Idiomatic: STL 演算法風格，較冗長
        // ⚡⚡ Performance: 與 insert 相近
        // vector<int> ans(nums.size() * 2);
        // std::copy(nums.begin(), nums.end(), ans.begin());
        // std::copy(nums.begin(), nums.end(), ans.begin() + nums.size());

        // 寫法 4: Range-based for 配合手動索引 (C++11 range-based for)
        // ⚠️ Idiomatic: 不推薦（需要手動維護索引變數，失去 range-based 優勢）
        // ⚡ Performance: 略慢（額外的迭代器開銷）
        // int n = nums.size();
        // vector<int> ans(n * 2);
        // int i = 0;
        // for (const auto& num : nums) {
        //     ans[i] = num;
        //     ans[i + n] = num;
        //     i++;
        // }

        return ans;
    }
};
