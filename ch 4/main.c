#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , d , S ;
    float M ;
    printf("donner a :");
    scanf("%d",&a);
    printf("donner b :");
    scanf("%d",&b);
    printf("donner c :");
    scanf("%d",&c);
    printf("donner d :");
    scanf("%d",&d);
    S =0;
    S = S + a + b + c + d;
    M = S / 4 ;
    printf(" la somme est : %d \n",S);
    printf(" la moyen est : %f ",M);
    return 0;
}
