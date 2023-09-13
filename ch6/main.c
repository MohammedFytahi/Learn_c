#include <stdio.h>
#include <stdlib.h>



    int main() {
    float r, circonf;
    const float pi = 3.14;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &r);

    circonf = 2 * pi * r;

    // Afficher le résultat
    printf("La circonférence du cercle avec un rayon de %.2f est %.2f\n", r, circonf);

    return 0;

}

