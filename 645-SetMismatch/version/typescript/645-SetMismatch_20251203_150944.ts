// Last updated: 2025/12/3 下午3:09:44
1function smallerNumbersThanCurrent(nums: number[]): number[] {
2    const indexed: [number, number][] = nums.map((num, idx) => [num, idx]);
3	indexed.sort((a, b) => a[0] - b[0]);
4	
5	// 假設 nums = [4, 1, 3, 2]
6	// indexed (original) -> [[4, 0], [1, 1], [3, 2], [2, 3]]
7	// indexed (sorted)   -> [[1, 1], [2, 3], [3, 2], [4, 0]]
8	// index:                  0       1       2       3
9
10	const result: number[] = new Array(nums.length);
11	for (let i = 0; i < indexed.length; i++) {
12	    if (i > 0 && indexed[i][0] === indexed[i - 1][0]) {
13	        result[indexed[i][1]] = result[indexed[i - 1][1]];
14	    } else {
15	        result[indexed[i][1]] = i;
16	    }
17	}
18	return result;
19};