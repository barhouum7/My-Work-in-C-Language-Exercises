#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Students{
	char nom[15];
	char pren[15];
	int age;
	float ds;
	float exam;
	}etudiant;

etudiant e;
int main(){
	printf("\n\n******* Saisie De L'etudiant : *******\n");
	printf("Nom : ");
	gets(e.nom);
	printf("Prenom : ");
	gets(e.pren);
	printf("Age : ");
	scanf("%d",&e.age);
	printf("Ds : ");
	scanf("%f",&e.ds);
	printf("Exam : ");
	scanf("%f",&e.exam);
	float moyenne = e.ds*0.3 + e.exam*0.7 ;
	printf("%s %s  : %.1f\n",e.nom,e.pren,moyenne);

	system("PAUSE");
	}
