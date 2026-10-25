#include <stdio.h>
void previousGreaterElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  
            }
        }
        printf("%d", prev);
        if (i != n - 1) printf(", ");  
    }
    printf("\n");
}
int main() {
    int arr[] = {10, 4, 2, 20, 40, 12, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    previousGreaterElements(arr, n);

    return 0;
}
