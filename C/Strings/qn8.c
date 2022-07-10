#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int
size);
int main()
{
 char word[SIZE][40];
 char first[40], last[40];
 int i, size;

 printf("Enter size: \n");
 scanf("%d", &size);
 printf("Enter %d words: \n", size);
 for (i=0; i<size; i++)
 scanf("%s", word[i]);
 findMinMaxStr(word, first, last, size);
 printf("First word = %s, Last word = %s\n", first, last);
 return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int
size)
{
 /* Write your program code here */
 int i, j;
 char temp[40];
 for (i = 0; i < size; i++){
     for (j = i+1; j <size; j++){
         if (strcmp(word[i],word[j])>0){
             strcpy(temp, word[i]);
             strcpy(word[i], word[j]);
             strcpy(word[j], temp);
         }
     }

 }
 strcpy(first,word[0]);
 strcpy(last, word[size-1]);
}