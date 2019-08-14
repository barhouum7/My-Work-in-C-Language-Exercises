#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void saisie(int *n)
{
	do
	{
		printf("\nTapez la taille du tableau : ");
		scanf("%d",&n);
	}while(n<0);
}

void remplir(int *t, int n)
{
	int i;
	printf("\nTapez les elements du tableau : ");
	printf("\n T[i]  =  ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&t[i]);
	}
}



main(){
	int n;
	int t[100];
	
	saisie(&n);
	remplir(&t,n);
	inverse(permute(&t));
	affiche(t,n);

	getch();
}
