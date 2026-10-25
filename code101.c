#include <stdio.h>
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;       
            high = mid - 1;     
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}
int lastOccurrence(int nums[], int n, int target) {
    int low = 0,