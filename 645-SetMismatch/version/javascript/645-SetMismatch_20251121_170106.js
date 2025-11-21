// Last updated: 2025/11/21 下午5:01:06
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    const n = nums.length;
	const expected_sum = n * (n + 1) / 2;
	const actual_sum = nums.reduce((sum, num) => sum + num, 0);
	
	const expected_square_sum = n * (n + 1) * (2 * n + 1) / 6;
	const actual_square_sum = nums.reduce((sum, num) => sum + num * num, 0);
	
	const diff_xy = actual_sum - expected_sum;
	const square_diff_xy = actual_square_sum - expected_square_sum;
	const sum_xy = square_diff_xy / diff_xy;
	
	const duplicate = (sum_xy + diff_xy) / 2;
	const missing = sum_xy - duplicate;
	return [duplicate, missing];
};