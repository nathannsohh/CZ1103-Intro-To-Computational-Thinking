#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
 char str[80], *p;

 printf("Enter a string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("longWordLength(): %d\n", longWordLength(str));
 return 0;
}
int longWordLength(char *s)
{
 /* Write your code here */
 int output = 0, count = 0, i,j;
 char punct[] = ".,-;:'\"()?! ";

for (i = 0; s[i] != '\0'; i++){
    for (j = 0; j < 12; j++){
        if (s[i] == punct[j]) {
            if (count > output){
                output = count;
                count = -1;
            }
            else count =-1;
        }
    }
    count++;    
    
}
return output;
}