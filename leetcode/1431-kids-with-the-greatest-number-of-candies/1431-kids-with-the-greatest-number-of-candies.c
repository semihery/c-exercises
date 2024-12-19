/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int greatestInArray = 0;
    bool *result = (bool *)malloc(candiesSize * sizeof(bool));

    for(size_t i = 0; i < candiesSize; i++) {
        if (candies[i] > greatestInArray) {
            greatestInArray = candies[i];
        }
    }
    
    for(size_t i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= greatestInArray);
    }

    *returnSize = candiesSize;
    return result;
}