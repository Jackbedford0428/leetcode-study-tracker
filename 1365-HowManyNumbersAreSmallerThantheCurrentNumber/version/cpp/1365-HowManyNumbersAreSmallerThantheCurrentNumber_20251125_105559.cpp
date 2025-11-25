// Last updated: 2025/11/25 上午10:55:59
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for (int curr : nums) {
            int count = 0;
            for (int num : nums) {
                if (num < curr) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};