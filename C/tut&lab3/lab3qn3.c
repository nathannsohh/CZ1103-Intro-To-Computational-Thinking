#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);

int main()
{
   int ar[80];
   int size, i;
       
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i <= size - 1; i++)
      scanf("%d", &ar[i]);
   printReverse1(ar, size);    
   printReverse2(ar, size);
   reverseAr1D(ar, size);
   printf("reverseAr1D(): ");
   if (size > 0) {
      for (i=0; i<size; i++)
         printf("%d ", ar[i]);
   }
   return 0;
}    
void printReverse1(int ar[], int size)  
{
    /* Write your code here – using index */
    int no_swaps, i=0, temp, size1;
    no_swaps = size/2;
    size1 = size;
    while (i != no_swaps){
        size = size - 1;
        temp = ar[i];
        ar[i] = ar[size];
        ar[size] = temp;
        i++;
    }
    for (int j = 0; j < size1; j++){
        printf("%d ", ar[j]);
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
/* Write your code here – using pointer */
    int no_swaps, i=0, temp, size1;
    int *p;
    p = ar;
    size1 = size;
    no_swaps = size/2;
    while (i != no_swaps){
        size = size - 1;
        temp = *(p+i);
        *(p+i) = *(p+size);
        *(p+size) = temp;
        i++;
    }
    for (int j = 0; j < size1; j++){
        printf("%d ", *(p+j));
    }
    printf("\n");
}
void reverseAr1D(int ar[ ], int size)
{
      /* Write your code here */
      int no_swaps, i=0, temp, size1;
    int *p;
    p = ar;
    size1 = size;
    no_swaps = size/2;
    while (i != no_swaps){
        size = size - 1;
        temp = *(p+i);
        *(p+i) = *(p+size);
        *(p+size) = temp;
        i++;
    }
}
