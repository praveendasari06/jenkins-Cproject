#include <stdio.h>
#include <string.h>

void palindrome() {
    char str[100];
    int i, j, length, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Check for palindrome
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    // return 0;
}

