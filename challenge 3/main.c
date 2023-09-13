#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;
    printf(" entrez a :");
    scanf("%d",&a);
    printf("entrez b :");
    scanf("%d",&b);
    printf(" la somme est : %d \n",a+b);
    printf("le produit : %d \n",a*b);
    printf(" la devidion : %.2f \n",a/b);
    printf("le modulo : %.2f ",a%b);


    return 0;
}
