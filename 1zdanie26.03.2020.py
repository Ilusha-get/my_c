#include <stdio.h>
#include <limits.h>
#define N 15
#define M 10
main() {
    int arr[N][M], i, j, min;
    min = INT_MAX;
    srand(time(NULL));
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            arr[i][j] = rand() % 256;
            printf(" |%3d| ", arr[i][j]);
        }
        printf("\n");
    }
    for (j=0; j<M; j++) {
        min = arr[0][j];
        for (i=1; i<N; i++)
            if (arr[i][j] < min)
                min = arr[i][j];
        printf("  %3d  ", min);
    }
    printf("\n");
}


