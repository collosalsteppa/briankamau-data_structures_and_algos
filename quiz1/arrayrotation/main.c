#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
    if (k >= numsSize) {
        k = k % numsSize;
    }

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }

    for (int i = numsSize - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotate(nums, numsSize, k);

    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
