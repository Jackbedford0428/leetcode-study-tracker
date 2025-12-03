// Last updated: 2025/12/3 下午2:59:18
1function smallerNumbersThanCurrent(nums: number[]): number[] {
2    const count: number[] = new Array(101).fill(0);
3	
4	// 統計每個數字出現次數
5	for (const num of nums) {
6		count[num]++;
7	}
8	
9	// 累加計數
10	for (let i = 1; i <= 100; i++) {
11		count[i] += count[i - 1];
12	}
13	
14	// 建立結果
15	return nums.map(num => num > 0 ? count[num - 1] : 0);
16};