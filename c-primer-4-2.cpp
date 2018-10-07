/*-utf-8-cprimer-4-string-prictice*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float num;
    printf("please input a float number such as 21.3 or 2.1e+001.\n");
    scanf("%e",&num);
    printf("this number is %.2e.\n",num);
    system("PAUSE");
    return 0;
} 
