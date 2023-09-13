#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr , inverse;

    printf(" entrez un nombre de trois chiffres :");
    scanf("%d",&nbr);
    if(nbr>=100 && nbr<=999){
         inverse = (nbr % 10) * 100 + ((nbr / 10) % 10) * 10 + (nbr / 100);
         printf("l'inverse de %d est %d",nbr,inverse);
    }

    return 0;
}
