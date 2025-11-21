// Last updated: 2025/11/21 下午3:28:48
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = 0, missing = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }
        }
        
        int actual_sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        missing = n * (n + 1) / 2 - (actual_sum - duplicate);
        
        return {duplicate, missing};
    }
};