#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = 0;
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[j]);
                duplicate = 1;
            }
        }
    }

    if (!duplicate) {
        printf("There are no duplicate values in the array.");
    }

    return 0;
}
