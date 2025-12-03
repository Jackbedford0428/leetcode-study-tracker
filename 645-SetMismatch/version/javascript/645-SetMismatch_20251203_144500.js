// Last updated: 2025/12/3 下午2:45:00
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var smallerNumbersThanCurrent = function(nums) {
6    const indexed = nums.map((num, idx) => [num, idx]);
7	indexed.sort((a, b) => a[0] - b[0]);
8	
9	const result = new Array(nums.length);
10	for (let i = 0; i < indexed.length; i++) {
11	    if (i > 0 && indexed[i][0] === indexed[i - 1][0]) {
12	        result[indexed[i][1]] = result[indexed[i - 1][1]];
13	    } else {
14	        result[indexed[i][1]] = i;
15	    }
16	}
17	return result;
18};