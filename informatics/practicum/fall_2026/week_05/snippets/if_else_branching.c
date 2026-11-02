#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not yet eligible to vote.\n");
    }

    return 0;
}
