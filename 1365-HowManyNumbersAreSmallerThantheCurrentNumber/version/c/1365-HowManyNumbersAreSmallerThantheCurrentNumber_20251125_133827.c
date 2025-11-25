// Last updated: 2025/11/25 下午1:38:27
// Sorting solution 用到的 struct 和比較函式
typedef struct {
    int value;
    int index;
} Pair;

int comparePair(const void* a, const void* b) {
    return ((Pair*)a)->value - ((Pair*)b)->value;
}

// 寫法 1-1 用到的 uthash 結構和比較函式
typedef struct {
    int key;       // 數字本身
    int count;     // 出現次數
    UT_hash_handle hh;  // uthash 必要的 handle
} HashEntry;

int compareInt(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    HashEntry* countMap = NULL;
    
    // 統計每個數字出現次數
    for (int i = 0; i < numsSize; i++) {
        HashEntry* entry;
        HASH_FIND_INT(countMap, &nums[i], entry);
        if (entry == NULL) {
            entry = (HashEntry*)malloc(sizeof(HashEntry));
            entry->key = nums[i];
            entry->count = 1;
            HASH_ADD_INT(countMap, key, entry);
        } else {
            entry->count++;
        }
    }
    
    // 收集所有不重複的數字
    int uniqueCount = HASH_COUNT(countMap);
    int* uniqueNums = (int*)malloc(uniqueCount * sizeof(int));
    int idx = 0;
    HashEntry *entry, *tmp;
    HASH_ITER(hh, countMap, entry, tmp) {
        uniqueNums[idx++] = entry->key;
    }
    
    // 排序不重複的數字
    qsort(uniqueNums, uniqueCount, sizeof(int), compareInt);
    
    // 建立映射：數字 -> 有多少數字比它小，不是小於等於，而是真正的小於
    HashEntry* smallerMap = NULL;
    int total = 0;
    for (int i = 0; i < uniqueCount; i++) {
        HashEntry* newEntry = (HashEntry*)malloc(sizeof(HashEntry));
        newEntry->key = uniqueNums[i];
        newEntry->count = total;  // 這裡 count 存的是「比它小的數字個數」
        HASH_ADD_INT(smallerMap, key, newEntry);
        
        // 累加：找到 countMap 中對應的出現次數
        HashEntry* countEntry;
        HASH_FIND_INT(countMap, &uniqueNums[i], countEntry);
        total += countEntry->count;
    }
    
    // 建立結果
    int* result = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        HashEntry* smallerEntry;
        HASH_FIND_INT(smallerMap, &nums[i], smallerEntry);
        result[i] = smallerEntry->count;
    }
    
    // 清理記憶體
    HASH_ITER(hh, countMap, entry, tmp) {
        HASH_DEL(countMap, entry);
        free(entry);
    }
    HASH_ITER(hh, smallerMap, entry, tmp) {
        HASH_DEL(smallerMap, entry);
        free(entry);
    }
    free(uniqueNums);
    return result;
}