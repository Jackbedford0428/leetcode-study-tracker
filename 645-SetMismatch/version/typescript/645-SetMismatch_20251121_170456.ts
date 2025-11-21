// Last updated: 2025/11/21 下午5:04:56
function findErrorNums(nums: number[]): number[] {
    const n: number = nums.length;
	const expected_sum: number = n * (n + 1) / 2;
	const actual_sum: number = nums.reduce((sum, num) => sum + num, 0);
	
	const expected_square_sum: number = n * (n + 1) * (2 * n + 1) / 6;
	const actual_square_sum: number = nums.reduce((sum, num) => sum + num * num, 0);
	
	const diff_xy: number = actual_sum - expected_sum;
	const square_diff_xy: number = actual_square_sum - expected_square_sum;
	const sum_xy: number = square_diff_xy / diff_xy;
	
	const duplicate: number = (sum_xy + diff_xy) / 2;
	const missing: number = sum_xy - duplicate;
	return [duplicate, missing];
};