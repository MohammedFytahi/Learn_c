#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int x1 , x2 , y1 , y2 ;
   float M;
   printf(" donner x1 et x2 et y1 et y2 :");
   scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
   M=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   printf(" la distance est : %f",M);


    return 0;
}
