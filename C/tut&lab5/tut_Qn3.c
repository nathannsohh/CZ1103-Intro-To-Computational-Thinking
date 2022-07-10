#include <stdio.h>
#define SIZE 100

typedef struct{
    int id;
    int totalLeave;
    int leaveTaken;
} leaveRecord;

void getInput(leaveRecord list[], int *n);
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void printList(leaveRecord list[], int n);

int main(){
    leaveRecord leaves[SIZE];
    int choice,ID, result, leave;
    int n=0;
    printf("Select one of the following options: \n");
    printf("1: getInput()\n");      
    printf("2: mayTakeLeave()\n");
    printf("3: printList()\n");
    printf("4: exit()\n");  
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            getInput(leaves, &n);
            break;
         case 2:
            printf("Enter staff ID: \n");    
            scanf("%d", &ID);
            printf("How many leaves do you want to take?\n");
            scanf("%d", &leave);
            result = mayTakeLeave(leaves, ID, leave, n);
            printf("findTarget(): %d\n",  result);   
            break;     
         case 3:
            printList(leaves, n);
            break;
      }
   } while (choice < 4);       
   return 0;

}

void getInput(leaveRecord list[], int*n){
    printf("What is your staff ID?\n");
    scanf("%d" , &list[*n].id);
    printf("What is your total number of days of leave?\n");
    scanf("%d", &list[*n].leaveTaken);
    printf("How many days of leave have you taken?\n");
    scanf("%d", &list[*n].totalLeave);
    (*n)+=1;
}

int mayTakeLeave(leaveRecord list[], int id, int leave, int n){
    int i, result;
    for (i=0; i < n; i++){
        if (list[i].id == id){
            result = i;
            break;
        }
    }
    if (leave+list[i].leaveTaken <= list[i].leaveTaken) return 1;
    else return 0;
}

void printList(leaveRecord list[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("Staff ID: %d\n", list[i].id);
        printf("Total leave taken: %d\n", list[i].leaveTaken);
        printf("Total leaves entitled: %d\n", list[i].totalLeave);
        printf("\n");
    }
}