// Last updated: 2025/11/21 下午5:05:46
function findErrorNums(nums: number[]): number[] {
    const seen: Set<number> = new Set();
	let duplicate: number = 0;
	
	for (const num of nums) {
		if (seen.has(num)) {
			duplicate = num;
		}
		seen.add(num);
	}
	
	let missing: number = 0;
	for (let i = 1; i <= nums.length; i++) {
		if (!seen.has(i)) {
			missing = i;
			break;
		}
	}
	
	return [duplicate, missing];
};