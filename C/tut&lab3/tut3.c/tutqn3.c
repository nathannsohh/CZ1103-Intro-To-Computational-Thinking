#include <stdlib.h>
#include <stdio.h>
#define SIZE 4

int main(){
int ar[4][SIZE] = {1,2,3,4, 1,1,2,2, 3,3,4,4, 4,5,6,7};
void transpose2D(int ar[][SIZE], int rowSize, int colSize);

transpose2D(ar,4,4);
}


void transpose2D(int ar[][4], int rowSize, int colSize) {
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            printf("%d ",ar[j][i]);
            
}