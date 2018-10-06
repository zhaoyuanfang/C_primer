/*-utf-8-c-primer-3-5*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int age;
    printf("please input your age\n");
    scanf("%d",&age);
    printf("you've passed %.2e seconds\n",3.156e7*age);
    system("PAUSE");
    return 0;
}
