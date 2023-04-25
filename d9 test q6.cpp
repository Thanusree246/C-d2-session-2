#include <stdio.h>

int main() {
    int A = 6, B = 10;
    int *pA = &A, *pB = &B;

    if (*pA > *pB) {
        printf("%d is the maximum number\n", *pA);
    } else {
        printf("%d is the maximum number\n", *pB);
    }

    return 0;
}
