#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[20];
   int telno;
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main() {
   PhoneBk s[MAX];
   char t[20], *p;
   int size=0, choice;
   char dummychar;
     
   printf("Select one of the following options: \n");
   printf("1: readin()\n");      
   printf("2: search()\n");
   printf("3: printPB()\n");
   printf("4: exit()\n");       
   do
{
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice)
{
         case 1:     
            scanf("%c", &dummychar);        
            size= readin(s);  
            break;
         case 2:  
            scanf("%c", &dummychar);   
            printf("Enter search name: \n");
            fgets(t, 20, stdin);   
            if (p=strchr(t,'\n')) *p= '\0';
            search(s,size,t);                    
            break;
         case 3:  
            printPB(s, size);
            break;          
      }
   
} while (choice < 4);
   return 0; }
void printPB(PhoneBk *pb, int size)   {
    /* Write your code here */ 
    if (size == 0) printf("Empty phonebook\n");
    else{
    printf("The phonebook list:\n");
    for (int i = 0; i< size;i++){
       printf("Name: %s\n", (*pb).name);
       printf("Telno: %d\n", (*pb).telno);
       pb++;

    }
}

    }

int readin(PhoneBk *pb) {
    /* Write your code here */ 
    int result = 0,size;
    char p[20];
    char dummychar;
    for(int i = 0; i < MAX;i++){ 
    printf("Enter name: \n");
    fgets(p, 20, stdin);
    size = strlen(p);
    p[size-1]='\0';
    if (p[0] == '#') break;
    else{
    printf("Enter tel:\n");
    scanf("%d", &(pb)->telno);
    scanf("%c", &dummychar); 
    strcpy(pb->name,p);
    pb++;
    p[20]= '\0';
    
    result += 1;
    }
    }
    return result;


    }

void search(PhoneBk *pb, int size, char *target) {
    /* Write your code here */ 
    int count=0,output, result;
    for (int i = 0; i <size; i++){
       result = strcmp(target, (pb+i)->name);
       if (result == 0){
          output = i;
          break;
       }
       else count++;
    }
    if (count == size) printf("Name not found!\n");
    else{
       printf("Name = %s, Tel = %d\n", target, (pb+output)->telno);
    }
    }