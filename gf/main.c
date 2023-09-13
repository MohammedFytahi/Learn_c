#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char num[20];

    // Saisie les informations
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe m/f : ");
    scanf(" %c", &sexe);

    printf("Entrez votre numéro de telephone : ");
    scanf("%s", num);

    // Affichage
    printf("\nInformations  :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Age : %d ans\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Numero de telephone : %s\n", num);

    return 0;
}








