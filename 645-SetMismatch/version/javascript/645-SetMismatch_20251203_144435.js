// Last updated: 2025/12/3 下午2:44:35
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var smallerNumbersThanCurrent = function(nums) {
6    const count = new Array(101).fill(0);
7	
8	// 統計每個數字出現次數
9	for (const num of nums) {
10		count[num]++;
11	}
12	
13	// 累加計數
14	for (let i = 1; i <= 100; i++) {
15		count[i] += count[i - 1];
16	}
17	
18	// 建立結果
19	return nums.map(num => num > 0 ? count[num - 1] : 0);
20};