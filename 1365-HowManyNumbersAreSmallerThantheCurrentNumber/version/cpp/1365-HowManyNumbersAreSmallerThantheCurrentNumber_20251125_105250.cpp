// Last updated: 2025/11/25 上午10:52:50
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> sorted_nums(n);
        for (int i = 0; i < n; i++) {
            sorted_nums[i] = {nums[i], i};
        }
        sort(sorted_nums.begin(), sorted_nums.end());

        // 假設 nums = {4, 1, 3, 2}
        // sorted_nums 未排序前 -> {(4,0), (1,1), (3,2), (2,3)}: (first=number, second=original index)
        // sorted_nums 排序後 -> {(1,1), (2,3), (3,2), (4,0)}: 預設 sorted by first and then second (ascending)

        vector<int> result(n);
        for (int i = 0; i < n; i++) {  // i 是排序後的索引，相當於 rank
            if (i > 0 && sorted_nums[i].first == sorted_nums[i - 1].first) {
                result[sorted_nums[i].second] = result[sorted_nums[i - 1].second];
            } else {
                result[sorted_nums[i].second] = i;
            }
        }
        return result;
    }
};