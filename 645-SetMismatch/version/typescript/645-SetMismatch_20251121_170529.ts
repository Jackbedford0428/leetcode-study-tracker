// Last updated: 2025/11/21 下午5:05:29
function findErrorNums(nums: number[]): number[] {
    let duplicate: number = 0;
	for (const num of nums) {
	    const index: number = Math.abs(num) - 1;
	    if (nums[index] < 0) {
	        duplicate = Math.abs(num);
	    } else {
	        nums[index] = -nums[index];
	    }
	}
	
	let missing: number = 0;
	for (let i = 0; i < nums.length; i++) {
	    if (nums[i] > 0) {
	        missing = i + 1;
	        break;
	    }
	}
	return [duplicate, missing];
};