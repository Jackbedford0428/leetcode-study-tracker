// Last updated: 2025/11/21 下午4:59:53
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    const seen = new Set();
	let duplicate = 0;
	
	for (const num of nums) {
		if (seen.has(num)) {
			duplicate = num;
		}
		seen.add(num);
	}
	
	let missing = 0;
	for (let i = 1; i <= nums.length; i++) {
		if (!seen.has(i)) {
			missing = i;
			break;
		}
	}
	
	return [duplicate, missing];
};