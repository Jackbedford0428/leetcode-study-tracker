// Last updated: 2025/11/25 下午1:11:28
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        // 取得所有不重複的數字並排序
        vector<int> sorted_keys;
        for (auto& [key, _] : count) {
            sorted_keys.push_back(key);
        }
        sort(sorted_keys.begin(), sorted_keys.end());
        
        // 建立映射：數字 -> 有多少數字比它小
        unordered_map<int, int> smaller;
        int total = 0;
        for (int key : sorted_keys) {
            smaller[key] = total;
            total += count[key];
        }
        
        // 建立結果
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = smaller[nums[i]];
        }
        return result;
    }
};