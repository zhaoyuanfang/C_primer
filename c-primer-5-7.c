/*-utf-8-c-primer-5-7*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double lifang(double n);
int main(void)
{
    double num;
    printf("please input a double type number.\n");
    scanf("%lf",&num);
    double ans=lifang(num);
    printf("%lf\n",ans);
    system("PAUSE");
    return 0;
}
double lifang(double n)
{
       return pow(n,3);
}
