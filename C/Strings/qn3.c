#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
 char str[50], *p;
 int totVowels, totDigits;
 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 processString(str, &totVowels, &totDigits);
 printf("Total vowels = %d\n", totVowels);
 printf("Total digits = %d\n", totDigits);
 return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
 /* Write your program code here */
 char digits[10] = "1234567890";
 char vowels[10] = "AEIOUaeiou";
 int i,j,k;
 *totDigits = 0;
 *totVowels = 0;
 for (int i = 0; str[i] != '\0'; ++i) {
        /*if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            (*totVowels)++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            (*totDigits)++;
        } 
        }*/
        for (k = 0, k < 10; k++;){
            if (str[i]==digits[k]) (*totDigits)++;
        }
        for (j=0; j < 10; j++){
            if (str[i]==vowels[j]) (*totVowels)++;
        }
    }
}
