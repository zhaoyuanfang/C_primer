/*-utf-8-practice.c-9-4*/
#include<stdio.h>
#include<stdlib.h>
void printch(char,int,int);
int main(void)
{
    printf("please input 1 char and 2 numbers, the first num is rows, the second is cols.\n");
    char ch;
    int rows,cols;
    scanf("%c%d%d",&ch,&rows,&cols);
    printch(ch,rows,cols);
    system("PAUSE");
    return 0;
} 
void printch(char ch,int rows,int cols)
{
     int i,j;
     for(i=0;i<cols;i++)
     {
             for(j=0;j<rows;j++)
             {
                     printf("%c",ch);
             }
             printf("\n");
     }
}
