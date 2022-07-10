#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
 int ar[50],i,size;

 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
 scanf("%d",ar+i);
 swapMinMax1D(ar, size);
 printf("swapMinMax1D(): ");
 for (i=0; i<size; i++)
 printf("%d ",*(ar+i));
 return 0;
}
void swapMinMax1D(int ar[], int size)
{
 /* Write your code here */
 int index_min, index_max, max = ar[0], min = ar[0], temp, i;
 for (i = 0; i < size; i++){
     if (ar[i] >= max){
         max = ar[i];
         index_max = i;
     }
     if (ar[i] <= min){
         min = ar[i];
         index_min = i;
     }
 }
 temp = ar[index_max];
 ar[index_max] = ar[index_min];
 ar[index_min] = temp;

}