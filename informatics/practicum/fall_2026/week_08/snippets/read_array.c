#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 5

#include <stdio.h>

void readArray(int arr[], unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
}

int main() {
    int arr[CAPACITY];

    printf("Enter %u integers:\n", CAPACITY);

    readArray(arr, CAPACITY);

    printf("Input reading completed.\n");

    return 0;
}
