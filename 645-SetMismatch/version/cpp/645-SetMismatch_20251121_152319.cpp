// Last updated: 2025/11/21 下午3:23:19
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;
        int duplicate = 0;
        
        for (int num : nums) {
            if (seen.count(num)) {
                duplicate = num;
            }
            seen.insert(num);
        }
        
        int missing = 0;
        for (int i = 1; i <= n; i++) {
            if (!seen.count(i)) {
                missing = i;
                break;
            }
        }
        
        return {duplicate, missing};
    }
};