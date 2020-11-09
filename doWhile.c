/*Exercices 1: La boucle while, do while et for
- Programme qui affiche les nombres de 10 a 1 apres
avoir saisi 10 au clavier. (Boucle while, do while et
for).*/
#include <stdio.h>
int main()
{
    int i;                         //declaration de la variable i pour stocker la valeur saisie
    printf("Entrer une valeur\n"); //message pour l utilisateur
    scanf("%d", &i);               //recuperation de la valeur saisie
    if (i == 10)                   //Verification si l utilisateur a bien saisi 10
    {
        do
        {
            printf("la valeur saisie vaut %d\n", i);
            i = i - 1; //instruction a executer

        } while (i >= 1);
    }
    else
    {
        printf("Veuillez  saisir 10"); //instruction si la condition n'est pas respecter
    }
    return 0;
}

//test branch