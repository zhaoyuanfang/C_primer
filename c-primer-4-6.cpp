/*-utf-8-c-primer-4-6*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    printf("please input your last name.\n");
    char first_name[40];
    char last_name[40];
    scanf("%s",&last_name);
    printf("then input your first name.\n");
    scanf("%s",&first_name);
    int len_l=strlen(last_name);
    int len_f=strlen(first_name);
    printf("%10s%10s\n",first_name,last_name);
    printf("%10d%10d\n",len_f,len_l);
    printf("%-10s%-10s\n",first_name,last_name);
    printf("%-10d%-10d\n",len_f,len_l);
    system("PAUSE");
    return 0;
}
