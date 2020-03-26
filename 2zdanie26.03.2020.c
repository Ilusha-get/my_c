#include <stdio.h>
#include <limits.h>
#define N 5
#define M 5
main() {
    int arr[N][M], i, j, min,max,maxch,minch;
    min=INT_MAX;
    max=INT_MIN;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            arr[i][j] = rand() % 5;
            printf(" |%3d| ", arr[i][j]);
        }
        printf("\n");
    }
    for (j=0; j<M; j++) {
        for (i=1; i<N; i++){

            if (arr[i][j] < min){
                min = arr[i][j];
                minch=i;}
        else
            if (arr[i][j] > max){
                max = arr[i][j];
                maxch=i;}}
        arr[minch][j]=max;
        arr[maxch][j]=min;

    min=INT_MAX;
    max=INT_MIN;
    }
        printf("\n");
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++)
            printf(" |%3d| ", arr[i][j]);
    printf("\n");}
    return (0);
}
