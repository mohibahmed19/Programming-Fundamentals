#include <stdio.h>

int main() {
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };

    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
