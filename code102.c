#include <stdio.h>
int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      
            high = mid - 1;    
        } else {
            low = mid + 1;     
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 2, 4, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int index = ceilIndex(arr, n, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}
