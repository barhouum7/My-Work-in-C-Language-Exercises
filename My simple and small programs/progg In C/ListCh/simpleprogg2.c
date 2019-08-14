/*C Program to read and print the student details
using the struct Function.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    ///////////////////////////
#define LASTNAME "Belhadj Med"
#define MAX 20
    //////////////////////////
typedef struct Students{
  char name[MAX];
  int age;
  int id;
  float marks;
}student;


int main()
{
  student s;
  printf("\nPut Your Name : ");
  gets(s.name);
  printf("\nPut Your Age : ");
  scanf("%i",&s.age);
  printf("\nPut Your Id : ");
  scanf("%d",&s.id);
  printf("\nPut Your Marks : ");
  scanf("%f",&s.marks);
    ///////////////////////////
  printf("\n --- Your Name Is **** %s ****\n --- And Your Last Name Is **** %s ****\n",s.name,LASTNAME);
  printf(" --- Your Age Is %i\n --- And Your Id Is %d\n --- And Your Marks Is %2.f\n",s.age,s.id,s.marks);

  system("PAUSE");
  return 0;
}
