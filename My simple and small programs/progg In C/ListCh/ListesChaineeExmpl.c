#include <stdio.h>
#include <stdlib.h>
  //////////////////////
//#define ...
  //////////////////////
typedef struct ok{
  int content;
  struct ok *suivant;
}ok;
  //////////////////////

int main(){
  ok* elm = NULL;
  elm = (ok*)malloc(sizeof(ok));

  elm->content = 10;
  elm->suivant = NULL;
  printf("\n %d  -  %d  -  %d  -  %d \n",&elm,elm,&(elm->content),&(elm->suivant));
  printf("\n --- Entered Elements : %d\n",elm->content);
  printf("\n --- Next Elements : %s\n",elm->suivant);
  system("PAUSE");
  return EXIT_SUCCESS;
}
