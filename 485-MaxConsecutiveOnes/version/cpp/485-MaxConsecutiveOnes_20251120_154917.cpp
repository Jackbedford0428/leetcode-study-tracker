// Last updated: 2025/11/20 下午3:49:17
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0, count = 0;
        size_t n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }

            if (count > max_count) {
                max_count = count;
            }
        }
        return max_count;
    }
};