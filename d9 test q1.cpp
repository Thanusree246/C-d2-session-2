#include <stdio.h>

int main() {
    int arr[] = { 6, -9, 4, -1, 9, -2, 5, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Negative numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
