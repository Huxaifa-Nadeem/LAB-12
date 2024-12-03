#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char *name, tempName[100];

    printf("Enter the total number of characters in your full name: ");
    scanf("%d", &n);

    name = (char *)malloc((n + 1) * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your full name: ");
    getchar(); // To clear the newline character left by scanf
    fgets(tempName, sizeof(tempName), stdin);

    strncpy(name, tempName, n);
    name[n] = '\0';

    printf("Dynamic Array = \"%s\"\n", name);

    free(name);
    return 0;
}
