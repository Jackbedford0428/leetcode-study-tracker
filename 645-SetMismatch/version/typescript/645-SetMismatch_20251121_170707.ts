// Last updated: 2025/11/21 下午5:07:07
function findErrorNums(nums: number[]): number[] {
    nums.sort((a, b) => a - b);
	let duplicate: number = 0;
	for (let i = 1; i < nums.length; i++) {
	    if (nums[i] === nums[i - 1]) {
	        duplicate = nums[i];
	        break;
	    }
	}
	
	let missing: number = 0;
	const n: number = nums.length;
	const expected_sum: number = n * (n + 1) / 2;
	const actual_sum: number = nums.reduce((sum, num) => sum + num, 0);
    missing = expected_sum - (actual_sum - duplicate);
    
	return [duplicate, missing];
};