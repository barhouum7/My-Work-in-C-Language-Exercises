#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

int main(){
  int *adr_deb,max;
  adr_deb = (int*)malloc(sizeof(int));
  //l = adr_deb;
  for(int i=0; i<6; i++){
    printf("\nDonnez L'entier d'ordre %d : ",i);
    scanf("%d",adr_deb);
  }
  max = *adr_deb;
    for(int i=0; i<6; i++){
      if (*adr_deb+i > max){
        max = *adr_deb+i;
      }
    }
    printf("\nLa Valeur maximale est %d  -  Elle existe dans l'adresse %d  .\n",max,&max);
    free(adr_deb);
  system("PAUSE");
  return 0;
}
