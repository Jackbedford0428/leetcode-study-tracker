// Last updated: 2025/11/14 上午10:39:19
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    // var n = nums.length;
    // var ans = new Array(n * 2);
    // for (var i = 0; i < n; i++) {
    //     ans[i] = nums[i];
    //     ans[i + n] = nums[i];
    // }
    // return ans;
    return nums.concat(nums);
    // 或更現代的寫法：return [...nums, ...nums];
};