// Last updated: 2025/11/13 下午6:28:49
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    var n = nums.length;
    var ans = new Array(n * 2);
    for (var i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
};