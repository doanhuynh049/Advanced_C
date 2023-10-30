#include <stdio.h>

void add_arrays(int* restrict a, int* restrict b, int* restrict c, int size) {
    for (int i = 0; i < size; i++) {
        a[i] = b[i] + c[i];
    }
}

int main() {
    int size = 5;
    int a[size], b[size], c[size];

    for (int i = 0; i < size; i++) {
        b[i] = i;
        c[i] = i * 2;
    }

    // Incorrect usage of restrict
    add_arrays(a, b, a, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}