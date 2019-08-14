/*C Program to read and print the student details
using structure and Dynamic Memory Allocation.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*structure declaration*/
struct student{
  char name[30];
  int roll;
  float perc;
};

int main(){
  struct student *std = NULL;

  /*Allocation memory dynamically*/
  std = (struct student*)malloc(sizeof(struct student));

  if(std == NULL){
    printf("Insufficient Memory, Exiting... \n");
    return 0;
  }

  //read and printf details ..
  printf("\nEnter name : ");
  gets(std->name);
  printf("\nEnter roll number : ");
  scanf("%d",&std->roll);
  printf("\nEnter percentage : ");
  scanf("%f",&std->perc);

  //Copying this details to the Memory Allocation ..
  /*  memcpy(std,,sizeof(struct student));    */
  std = realloc(std,sizeof(struct student));

  printf("\n --- Entered details are : \n");
  printf("\n    >>> Name : %s\n    >>> Roll Number : %d\n    >>> Percentage : %.2f\n\n",std->name,std->roll,std->perc);
  free(std);

  printf(" %d ",sizeof(struct student));
  system("PAUSE");
  return 0;
}
