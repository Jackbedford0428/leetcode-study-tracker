// Last updated: 2025/11/21 下午5:02:14
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    const { duplicate, seen } = nums.reduce((acc, num) => {
	    if (acc.seen.has(num)) {
	        acc.duplicate = num;
	    }
	    acc.seen.add(num);
	    return acc;
	}, { duplicate: 0, seen: new Set() });
	
	const missing = Array.from({ length: nums.length }, (_, i) => i + 1)
	    .find(i => !seen.has(i));
	
	return [duplicate, missing];
};