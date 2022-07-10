#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
 char a[80],b[80];
 char ch, *p;

 printf("Enter a string: \n");
 fgets(a, 80, stdin);
 if (p=strchr(a,'\n')) *p = '\0';
 printf("Enter a character to be inserted: \n");
 ch = getchar();
 insertChar(a,b,ch);
 printf("insertChar(): ");
 puts(b);
 return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
 /* Write your code here */
 int index = 0;
 int i = 0, total;
 total = strlen(str1) %3 +strlen(str1);

 while (str1[i] != '\0'){
     if (index > 0 && index%3 == 0){
         str2[index] = ch;
         index++;
     }
     else{
         str2[index] = str1[i] ;
         index++;
         i++;
     }
 }
 str2[index] = '\0';
}