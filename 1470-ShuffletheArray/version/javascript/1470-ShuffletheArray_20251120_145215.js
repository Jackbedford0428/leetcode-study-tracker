// Last updated: 2025/11/20 下午2:52:15
/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    const ans = [];
	for (let i = 0; i < n; i++) {
	    ans.push(nums[i], nums[i + n]);
	}
	return ans;
};