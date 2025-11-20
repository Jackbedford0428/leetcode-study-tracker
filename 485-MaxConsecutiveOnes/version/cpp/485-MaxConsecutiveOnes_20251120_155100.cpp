// Last updated: 2025/11/20 下午3:51:00
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        for (int num : nums) {
            if (num == 1) {
                currentCount++;
            } else {
                currentCount = 0;
            }

            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        }
        return maxCount;
    }
};
