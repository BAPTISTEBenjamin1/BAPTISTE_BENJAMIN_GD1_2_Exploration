#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int changer (int a, int b){

a = b;

}




int main (void){

//A partir d'ici ça bloque.
struct Lieu;

typedef struct Lieu lieu(

char Nom[10];
char Description [50];
int Difficultee;
int tableauID;

);

printf("hahahaha\n\n\n");






char choix [10] = {0};
char choix1 [10] = {0};
char foret [10] = {"foret"};
char fleuve [10] = {"fleuve"};


printf("Vous partez a l'aventure !\n\n Il vous faut choisir une route, celle vers l'est, la Foret. Ou celle vers l'ouest, vous longer le Fleuve\n\n Tapez foret pour la Foret\n\n Tapez fleuve pour le Fleuve\n\n");

printf("==========\n\n");

scanf("%s",&choix1);

if( strcmp (choix1,foret)==0){


	printf("==========\n\n");	
	printf("Apres quelques miutes de marche, vous arrivez a la lisiere de cette derniere\n\n\n\n");
}


if( strcmp (choix1,fleuve)==0){


	printf("==========\n\n");	
	printf("Votre decision prise, vous commencez a longer le Fleuve\n\n\n\n");
}


};