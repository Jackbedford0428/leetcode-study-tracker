// Last updated: 2025/11/21 下午5:06:16
function findErrorNums(nums: number[]): number[] {
    const { duplicate, seen } = nums.reduce<{ duplicate: number; seen: Set<number> }>(
	    (acc, num) => {
	        if (acc.seen.has(num)) {
	            acc.duplicate = num;
	        }
	        acc.seen.add(num);
	        return acc;
	    },
	    { duplicate: 0, seen: new Set() }
	);
	
	const missing: number = Array.from({ length: nums.length }, (_, i) => i + 1)
	    .find(i => !seen.has(i))!;
	
	return [duplicate, missing];
};