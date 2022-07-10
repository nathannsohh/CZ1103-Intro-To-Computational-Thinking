#include <stdio.h>
#define SIZE 4

int main() {
    void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
    int ar[4][4] = {4,3,8,6, 9,0,6,5, 5,1,2,4, 9,8,3,7};
    reduceMatrix2D(ar, 4,4);

}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize){
    int sum = 0;
    int k,i,j;
    for (j = 0; j < rowSize; j++)
        for (i = 0; i < colSize; i++){
            if (j == i){
                k = j+1;
                sum += ar[i][j];
                while (k != rowSize){
                    sum += ar[k][j];
                    ar[k][j] = 0;
                    k += 1;
                }
                ar[i][j] = sum;
            }
            sum = 0;
            }
    for (int a = 0; a < rowSize; a++){
        for (int b = 0; b < colSize; b++){
            printf("%d ", ar[a][b]);
            }
        printf("\n");
        }
        }

