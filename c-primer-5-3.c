/*-utf-8-c-primer-5-3*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int days;
    int weeks,day;
    printf("please input the days amount.\n");
    scanf("%d",&days);
    while(days>0)
    {
                 weeks=days/7;
                 day=days%7;
                 printf("%d days are %d weeks, %d days\n",days,weeks,day);
                 scanf("%d",&days);
    }
    system("PAUSE");
    return 0;
} 
