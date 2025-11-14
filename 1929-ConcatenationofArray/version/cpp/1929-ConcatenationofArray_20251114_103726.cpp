// Last updated: 2025/11/14 上午10:37:26
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int> ans;
        // ans.reserve(nums.size() * 2);
        // ans.insert(ans.end(), nums.begin(), nums.end());
        // ans.insert(ans.end(), nums.begin(), nums.end());
        vector<int> ans(nums);
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};