// Last updated: 2025/11/25 上午10:31:27
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(101, 0);  // 初始化為 0
        
        // 統計每個數字出現次數
        for (int num : nums) {
            count[num]++;
        }
        
        // 累加計數：count[i] 變成「小於等於 i 的數字總數」
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        
        // 建立結果
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = (nums[i] > 0) ? count[nums[i] - 1] : 0;
        }
        
        return result;
    }
};