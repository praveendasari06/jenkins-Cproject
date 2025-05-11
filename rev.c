#include <stdio.h>
#include <string.h>

void rev() {
    char str[100], temp;
    int i, j;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Get the length of the string
    int length = strlen(str);

    // Reverse the string in place
    for(i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    // return 0;
}

