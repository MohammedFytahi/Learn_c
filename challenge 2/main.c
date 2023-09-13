#include <stdio.h>
#include <stdlib.h>

int main()
{

    float F ,C;
    printf(" entrez la temperature en F :");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("C est : %f \n",C);
    if (C<=10)
        printf("tres froid");
        else if(C>10 && C <30)
        printf("froid");
        else if(C>=30 && C<40)
        printf("chaud");
    else
    printf("tres chaud");

    return 0;
}
