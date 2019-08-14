#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
  int i , j , n , m , m3[10][10] , m1[10][10] , m2[10][10];

  do
  {
    printf("\nDonnez deux entiers positifs :  \n\n N = ");
    scanf("%d",&n);
    printf("\n M = ");
    scanf("%d",&m);
  }while(n<0 || m<0);

  printf("\n\n\n               ******** Matrice 1  : ********        \n\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      printf("\n --Saisissez le contenu de la case de coordonnee ( %d , %d )  : ",i,j);
      scanf("%d",&m1[i][j]);
    }
  }//Lire les cases du matrice M1 ...

  printf("\n\n\n               ******** Matrice 2  : ********        \n\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      printf("\n --Saisissez le contenu de la case de coordonnee ( %d , %d )  : ",i,j);
      scanf("%d",&m2[i][j]);
    }
  }//Lire les cases du matrice M2 ...

  printf("\n\n");
  printf("  -- M1 + M2 = \n\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      printf("%8d",m1[i][j]);
    }
    printf("\n\n");
  }//Affichage de la premiere matrice ...

  printf("\n");
  printf("    +\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      printf("%8d",m2[i][j]);
    }
    printf("\n\n");
  }//Affichage de la deuxième matrice ...

  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      m3[i][j] = m1[i][j] + m2[i][j];
    }
  }//Calcul la somme de deux matrices M1 et M2 ...

  printf("\n");
  printf("  = -------------------------\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {
      printf("%8d",m3[i][j]);
    }
    printf("\n\n");
  }//Affichage de la somme de deux matrices M1 et M2 ...

  printf("\n\n\n\n                                  Mind Hackers ! - mat  .   ^,^\n\n\n\n");
  getch();
  return 0;
}
