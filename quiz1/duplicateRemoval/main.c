#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0 || numsSize == 1) {
        return numsSize;
    }

    int i = 0;
    int j = 1;

    while (j < numsSize) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }

    return i + 1;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 5, 6, 6, 7, 8, 9, 9};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, numsSize);

    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
