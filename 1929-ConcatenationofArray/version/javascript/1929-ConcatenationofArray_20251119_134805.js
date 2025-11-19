// Last updated: 2025/11/19 下午1:48:05
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    // 寫法 1: concat 方法 (Array.prototype.concat)
    // ✅✅✅ Idiomatic: 最標準的陣列連接方法
    // ⚡⚡⚡ Performance: 最快（引擎優化）
    return nums.concat(nums);

    // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
    // ✅ Idiomatic: ES5 時代的標準寫法
    // ⚡⚡ Performance: 中等
    // var n = nums.length;
    // var ans = new Array(n * 2);
    // for (var i = 0; i < n; i++) {
    //     ans[i] = nums[i];
    //     ans[i + n] = nums[i];
    // }
    // return ans;

    // 寫法 3: forEach 迴圈 (Array.prototype.forEach)
    // ⚠️ Idiomatic: 不推薦（forEach 不適合建構新陣列）
    // ⚡ Performance: 較慢（函式呼叫開銷）
    // const n = nums.length;
    // const ans = new Array(n * 2);
    // nums.forEach((num, i) => {
    //     ans[i] = num;
    //     ans[i + n] = num;
    // });
    // return ans;
    
    // 寫法 4: 展開運算子 (ES6 spread operator)
    // ✅✅ Idiomatic: 現代 JavaScript 簡潔寫法
    // ⚡⚡⚡ Performance: 與 concat 相近
    // return [...nums, ...nums];

    // 寫法 5: for...of 迴圈 (ES6 for...of)
    // ✅ Idiomatic: 現代寫法，但需手動索引
    // ⚡⚡ Performance: 中等
    // const n = nums.length;
    // const ans = new Array(n * 2);
    // let i = 0;
    // for (const num of nums) {
    //     ans[i] = num;
    //     ans[i + n] = num;
    //     i++;
    // }
    // return ans;
};
