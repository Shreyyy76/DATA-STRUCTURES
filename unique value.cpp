#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique values in the array: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }

    if (count == 0) {
        printf("\n");
    } else {
        printf("There are no unique values in the array.\n");
    }

    return 0;
}
