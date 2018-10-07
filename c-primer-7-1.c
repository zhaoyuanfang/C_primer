/*-utf-8-c-primer-7-1*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
    int sp=0;
    int en=0;
    int others=0;
    char ch;
    while((ch=getchar())!='#')
    {
                              switch(ch)
                              {
                                        case ' ':
                                             sp++;
                                             break;
                                        case '\n':
                                             en++;
                                             break;
                                        default:
                                                others++;
                                                break;
                              }
    }
    printf("we have %d spaces,%d enters and %d others char.\n",sp,en,others);
    system("PAUSE");
    return 0;
}
