// Last updated: 2025/11/14 上午10:39:58
function getConcatenation(nums: number[]): number[] {
    // const n = nums.length;
    // const ans = new Array(n * 2);
    // for (let i = 0; i < n; i++) {
    //     ans[i] = nums[i];
    //     ans[i + n] = nums[i];
    // }
    // return ans;
    return nums.concat(nums);
    // 或：return [...nums, ...nums];
};