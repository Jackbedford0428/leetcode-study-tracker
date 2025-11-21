// Last updated: 2025/11/21 下午5:01:48
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    let duplicate = 0;
	for (const num of nums) {
	    const index = Math.abs(num) - 1;
	    if (nums[index] < 0) {
	        duplicate = Math.abs(num);
	    } else {
	        nums[index] = -nums[index];
	    }
	}
	
	let missing = 0;
	for (let i = 0; i < nums.length; i++) {
	    if (nums[i] > 0) {
	        missing = i + 1;
	        break;
	    }
	}
	return [duplicate, missing];
};