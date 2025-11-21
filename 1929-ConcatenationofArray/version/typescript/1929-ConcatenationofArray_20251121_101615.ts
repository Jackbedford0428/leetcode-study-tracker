// Last updated: 2025/11/21 上午10:16:15
function findMaxConsecutiveOnes(nums: number[]): number {
    let maxCount: number = 0;
	let currentCount: number = 0;
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