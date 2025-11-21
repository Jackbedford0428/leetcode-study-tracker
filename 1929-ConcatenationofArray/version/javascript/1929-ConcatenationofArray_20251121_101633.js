// Last updated: 2025/11/21 上午10:16:33
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let maxCount = 0;
	let currentCount = 0;
	for (const num of nums) {
	    if (num === 1) {
	        currentCount++;
	        maxCount = Math.max(maxCount, currentCount);
	    } else {
	        currentCount = 0;
	    }
	}
	return maxCount;
};