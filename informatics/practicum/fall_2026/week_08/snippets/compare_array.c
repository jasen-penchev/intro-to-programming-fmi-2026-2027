#define CAPACITY 5

#include <stdio.h>

int equal(int a[], int b[], unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        if (a[i] != b[i]) return 0;
    }

    return 1;
}

int main() {
    int arr1[CAPACITY] = { 10, 20, 30, 40, 50 };
    int arr2[CAPACITY] = { 10, 20, 30, 40, 50 };
    int arr3[CAPACITY] = { 1, 2, 3, 4, 5 };

    printf("arr1 == arr2 -> %s\n", equal(arr1, arr2, CAPACITY) ? "true" : "false");
    printf("arr1 == arr3 -> %s\n", equal(arr1, arr3, CAPACITY) ? "true" : "false");

    return 0;
}
