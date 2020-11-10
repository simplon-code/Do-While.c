/*Exercices 1: La boucle while, do while et for
- Programme qui affiche les nombres de 10 a 1 apres
avoir saisi 10 au clavier. (Boucle while, do while et
for).*/
#include <stdio.h>
int main()
{ 
    int i;//declaration de la variable i pour stocker la valeur saisie
    // demander a l'utilisateur de saisir 10 jusqu'a ce qu'il saisi 10
    do{
        printf("Entrer la valeur 10\n");//message pour l utilisateur
        scanf("%d",&i);//recuperation de la valeur saisie
    }while(i!=10);
    printf("les nombres entre 10 et 1 sont :\n");
    // afficher les entiers compris entre 10 et 1
    do{
        printf("%d\t",i);
        i=i-1;//instruction a executer   
    }while (i>=1);
    // aller a la ligne
    printf("\n");

    return 0;
}