#include <stdio.h>
#include <stdlib.h>
  //////////////////
#define MAX 20
  /////////////////
typedef struct Dates{
  int jour;
  int mois;
  int annee;
}date;
typedef struct Sportifs{
  char nom[MAX];
  char pren[MAX];
  char pays[MAX];
  date naiss;
  int performance;
}sportif;

  ////////////////
int main(){
  sportif t_sport[6];
  sportif aux;
  int i,n;
  printf("\nDonnez le nombre de sportif : ");
  scanf("%d",&n);
  getchar();
  for(int i=0; i<n; i++){
    printf("\n   *************************\n");
    printf("Donnez le nom de sportif n° %d\n",i+1);
    gets(t_sport[i].nom);
    printf("Donnez le prenom de sportif n° %d\n",i+1);
    gets(t_sport[i].pren);
    printf("Donnez la pays de sportif n° %d\n",i+1);
    gets(t_sport[i].pays);
    printf("\nDonnez la date de naiss de sportif n° %d\n",i+1);
    printf("\nDonnez Le Jour : ");
    scanf("%d",&t_sport[i].naiss.jour);
    printf("\nDonnez Le Mois : ");
    scanf("%d",&t_sport[i].naiss.mois);
    printf("\nDonnez Le Annee : ");
    scanf("%d",&t_sport[i].naiss.annee);
    printf("\nDonnez La performance : ");
    scanf("%d",&t_sport[i].performance);
    getchar();
  }//Fin Main For()
  //Tri du tab selon le performance..
  for(int i=0; i<n; i++){
      if(t_sport[i+1].performance > t_sport[i].performance){
        aux = t_sport[i];
        t_sport[i] = t_sport[i+1];
        t_sport[i+1] = aux;
      }//Fin If()
    }//Fin For() 1
    //Affichage des gagnants ...
    if(n==1){
    printf("\n    -----------------------------------------------------------------------------\n");
    printf("\n      ***************   Medaille D'or !!! :)        **************");
    printf("\n  # Le sportif : %s  -  %s  -  %s\n",t_sport[1].nom,t_sport[1].pren,t_sport[1].pays);
    printf("\n    -----------------------------------------------------------------------------\n");
  }else{
    printf("\n    -----------------------------------------------------------------------------\n");

    printf("\n      ***************   Medaille D'or !!! :)        **************");
    printf("\n  # Le sportif : %s  -  %s  -  %s\n",t_sport[0].nom,t_sport[0].pren,t_sport[0].pays);
    printf("\n      ***************   Medaille D'argents !!! :)   **************");
    printf("\n  # Le sportif : %s  -  %s  -  %s\n",t_sport[1].nom,t_sport[1].pren,t_sport[1].pays);
    printf("\n      ***************   Medaille de bronze !!! :)   **************");
    printf("\n  # Le sportif : %s  -  %s  -  %s\n",t_sport[2].nom,t_sport[2].pren,t_sport[2].pays);
    printf("\n    -----------------------------------------------------------------------------\n");
    }
  return 0;
  system("PAUSE");
}
