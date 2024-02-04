#include <stdio.h>

int getSingleElement(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = getSingleElement(nums, numsSize);

    printf("The single element is: %d\n", result);

    return 0;
}
