#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int arr[], int n)
{

    if (n == 0) {
        return 0;
    }
    else {
       
        return arr[0] + sum(arr + 1, n - 1);
    }
}

int main()
{
    int arr[] = { 12, 3, 4, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", sum(arr, n));

    return 0;
} 
