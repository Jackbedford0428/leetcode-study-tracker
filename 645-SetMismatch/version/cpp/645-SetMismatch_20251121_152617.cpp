// Last updated: 2025/11/21 下午3:26:17
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = 0, missing = 0;
        
        for (int num : nums) {
            int index = abs(num) - 1;
            if (nums[index] < 0) {
                duplicate = abs(num);
            } else {
                nums[index] = -nums[index];
            }
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        
        return {duplicate, missing};
    }
};