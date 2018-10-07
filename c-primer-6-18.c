/*-utf-8-c-primer-6-18*/
#include<stdio.h>
#include<stdlib.h>
#define DUNBAR 150
int main(void)
{
    int weeks=1;
    int fri=5;
    while(fri<DUNBAR)
    {
                  fri=(fri-weeks)*2;
                  weeks++;
    }
    printf("after %d weeks.\n",weeks);
    system("PAUSE");
    return 0;
}
