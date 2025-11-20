// Last updated: 2025/11/20 下午1:37:39
function shuffle(nums: number[], n: number): number[] {
    const ans: number[] = new Array(n * 2);
    for (let i = 0; i < n; i++) {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }
    return ans;
};