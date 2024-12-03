#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
