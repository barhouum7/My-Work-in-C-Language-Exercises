#include<stdio.h>
#include<stdlib.h>

typedef struct Vehicules{
	int numero;
	int marque;
	float prix;
	char couleur[15];
	}vehicule;

vehicule v1,v2;
int main(){
	printf("******* Saisie De V1 : *******\n");
	printf("Marque : ");
	scanf("%d\n",&v1.marque);
	gets();
	if(v1.prix > v2.prix) printf("Vehicule V1 est plus cher que V2\n");
	else printf("Vehicule V2 est plus cher que V1\n");

	system("PAUSE");
	}
