#include <stdio.h>
#include <stdlib.h>

/* -------------------------------------------------------------------- */
typedef struct Nodes Nodes;
struct Nodes{
    int content;                //Data of the Nodes ...
    Nodes *nextptr;         //Adress of the next Node ...
}*node;

/* La Structure de controle ... */
typedef struct Liste Liste;
struct Liste{
  Nodes *first;
}*controlPreviousElement;
/* -------------------------------------------------------------------- */
/* Functions Area */
Liste *initia(){
  Liste *controlPreviousElement = malloc(sizeof(*controlPreviousElement));
  Nodes *node = malloc(sizeof(*node));

  if(controlPreviousElement == NULL || node == NULL){
    exit(EXIT_FAILURE);
  }

  // node->content = 0;
  // controlPreviousElement->first = node;
  // node->nextptr = NULL;

  return controlPreviousElement;
}
/* Create Nodes List */
void createNodeList(Liste *controlPreviousElement , int numb){
  int i;
  /* Creation of a new Node(element) ...*/
  Nodes *newElement1 = malloc(sizeof(*newElement1));
  Nodes *newElementn = malloc(sizeof(*newElementn));
  if(controlPreviousElement == NULL || newElementn == NULL || newElement1 == NULL){
    exit(EXIT_FAILURE);
  }
  printf("\n Input data for node 1 : ");
  scanf("%d",&newElement1->content);
  newElement1->nextptr = NULL;
  controlPreviousElement->first = newElement1;

  for(i=2; i<=numb; i++){
    printf("\n Input data for node %d : ",i);
    scanf("%d",&newElementn->content);
  }


      newElementn->nextptr = controlPreviousElement->first;
      controlPreviousElement->first = newElementn;
}

void deleteFirstElement(Liste *controlPreviousElement){
  if(controlPreviousElement == NULL){
    exit(EXIT_FAILURE);
  }
  if(controlPreviousElement->first != NULL){
    Nodes *toDelete = controlPreviousElement->first;
    controlPreviousElement->first = controlPreviousElement->first->nextptr;

    free(toDelete);
  }
}

/* Displaying This Nodes ... */
void displayList(Liste *controlPreviousElement , int numb){
  int i=1;
  if(controlPreviousElement == NULL){
    printf("\n List is empty.\n\n");
    exit(EXIT_FAILURE);
  }else{
    Nodes *actuel = controlPreviousElement->first;
    while((actuel != NULL) && (i<=numb)){
      printf(" Data number %d = %d\n",numb-i+1,actuel->content);  // Prints the data of current Node ..
      actuel = actuel->nextptr;    // Advances the position of current Node ...
      i++;
    }
    printf("\n NULL \n");
  }
}

/* -------------------------------------------------------------------- */

int main(){
  int numb,NewNum;
  // char rep;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
    Liste *macontrolPreviousElement = initia();

    printf("\n\n Input the number of nodes : ");
    scanf("%d",&numb);

    createNodeList(macontrolPreviousElement,numb);

    printf("\n");
    printf("\n Data entered in the list : \n");
    //deleteFirstElement(macontrolPreviousElement);
    displayList(macontrolPreviousElement,numb);
    // do{
    //   do{
    //     printf("\n Are You Want To Add An New Element ?Y/N ");
    //     scanf("%c",&rep);
    //   }while(rep ('Y','N'));
    //   printf("\n Enter What You Want To Add : ");
    // }while(rep == 'N');

    printf("\n Are You Want To Add An New Element ? ");
    scanf("%d",&NewNum);
    // InsertNewElement(macontrolPreviousElement,NewNum,PosPNum);
    printf("\n");
    system("PAUSE");
    return 0;
}
