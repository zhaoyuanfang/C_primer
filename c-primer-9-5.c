/*-utf-8-c-primer-9-5*/
#include<stdio.h>
#include<stdlib.h>
void lager_of(double *,double *);
int main(void)
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    lager_of(&a,&b);
    printf("a is %lf now, b is %lf now\n",a,b);
    system("PAUSE");
    return 0;
}
void lager_of(double *a,double *b)
{
     if(*a>*b)
     {
              *b=*a;
     }
     else
     {
         *a=*b;
     }
}
