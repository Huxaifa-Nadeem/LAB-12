#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, idLength;
    char *dynamicArray, studentId[50];

    printf("Enter the total number of characters in your full name: ");
    scanf("%d", &n);

    dynamicArray = (char *)malloc((n + 1) * sizeof(char));
    if (!dynamicArray) return 1;

    printf("Enter your full name: ");
    getchar();
    fgets(dynamicArray, n + 1, stdin);

    printf("Enter your student ID: ");
    fgets(studentId, sizeof(studentId), stdin);
    idLength = strlen(studentId) - 1;
    studentId[idLength] = '\0';

    dynamicArray = (char *)realloc(dynamicArray, n + idLength + 2);
    if (!dynamicArray) return 1;

    memmove(dynamicArray + idLength + 1, dynamicArray, n + 1);
    memcpy(dynamicArray, studentId, idLength);
    dynamicArray[idLength] = ' ';

    printf("Dynamic Array = \"%s\"\n", dynamicArray);

    free(dynamicArray);
    return 0;
}
