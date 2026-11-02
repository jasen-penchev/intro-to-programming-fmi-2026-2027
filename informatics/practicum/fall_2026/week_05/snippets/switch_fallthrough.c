#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a letter: ");

    // Basic error handling
    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    switch (ch) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        // All 10 cases execute this single line of code
        printf("Vowel letter\n"); break;
    default:
        printf("Consonant letter or non-alphabetic character\n"); break;
    }

    return 0;
}
