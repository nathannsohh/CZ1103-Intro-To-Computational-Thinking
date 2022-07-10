#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
 int i,b[50],size;
 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
 scanf("%d",&b[i]);
 printf("platform1D(): %d\n", platform1D(b,size));
 return 0;
}
int platform1D(int ar[], int size)
{
 /* Write your code here */
 int i=0, placeholder, count=1, count1 = 1;
 placeholder = ar[i];
 for (i = 1; i < size; i++){
     if (ar[i] == placeholder) count++;
     else {
         if (count > count1){
         count1 = count;
         count = 1;
         }
         else count = 1;
 }
 placeholder = ar[i];
}
 if (count > count1) count1 = count;
 return count1;
}