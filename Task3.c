#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, size, newSize, i, largest;

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) return 1;

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) return 1;

    printf("Enter %d new elements:\n", newSize - size);
    for (i = size; i < newSize; i++) scanf("%d", &arr[i]);

    largest = arr[0];
    for (i = 1; i < newSize; i++)
        if (arr[i] > largest) largest = arr[i];

    printf("The largest number in the array is: %d\n", largest);

    free(arr);
    return 0;
}
