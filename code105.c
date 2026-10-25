#include <stdio.h>
int majorityElement(int nums[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find candidate using Boyer-Moore
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}
int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = majorityElement(nums, n);

    printf("%d\n", result);

    return 0;
}
