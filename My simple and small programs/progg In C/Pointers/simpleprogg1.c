#include<stdio.h>
#include<stdlib.h>

//Main Functions ...
int New_Function(int a, int z);
int New_Function2(char *name);
/*
int New_Function(int a, int z){
  int sum;
  sum = a + z;
  return sum;
}
int New_Function2(char *name){
  return *name;
}
*/
int main(){
  int sum = New_Function(10,15);
  char name[] = "Hello World !" ;
  char namee = New_Function2(name);
  printf("%s\n",&namee);
  printf("%i\n",sum);
  printf("%i\n",New_Function(10,15));
  printf("%s\n",New_Function2(name));

  return 0;
  system("PAUSE");
}
//New_Function
int New_Function(int a, int z){
  int sum;
  sum = a + z;
  return sum;
}
//New_Function2
int New_Function2(char *name){
  return *name;
}
