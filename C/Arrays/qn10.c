#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
 int data[SIZE][SIZE];
 int i,j;
 int rowSize, colSize;
 printf("Enter the array size (rowSize, colSize): \n");
 scanf("%d %d", &rowSize, &colSize);
 printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
 for (i=0; i<rowSize; i++) 
 for (j=0; j<colSize; j++)
 scanf("%d", &data[i][j]);
 printf("compress2D(): \n");
 compress2D(data, rowSize, colSize);
 return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
 /* Write your code here */
 int k, l, count=1,counter=0, start;
  for (k = 0; k < rowSize; k++){
    start = data[k][0];
    count = 1;
    counter = 0;
    for (l=1; l < colSize; l++){
      if (data[k][l] == start){
        count++;
        }
      else{
        start = data[k][l];
        printf("%d %d ",data[k][l-1], count);
        count = 1;
      }
      counter++;
      if (counter == colSize-1){
        printf("%d %d ",data[k][l], count);
        printf("\n");
      }
      
    }
  }
}