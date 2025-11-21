// Last updated: 2025/11/21 下午5:03:22
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    nums.sort((a, b) => a - b);
	let duplicate = 0;
	for (let i = 1; i < nums.length; i++) {
	    if (nums[i] === nums[i - 1]) {
	        duplicate = nums[i];
	        break;
	    }
	}
	
	let missing = 0;
    const n = nums.length;
	const expected_sum = n * (n + 1) / 2;
	const actual_sum = nums.reduce((sum, num) => sum + num, 0);
    missing = expected_sum - (actual_sum - duplicate);

	return [duplicate, missing];
};