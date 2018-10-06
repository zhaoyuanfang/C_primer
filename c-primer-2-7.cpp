/*-utf-8-c_primer_2.7*/
#include<stdio.h>
#include<stdlib.h>
void smile(void);
int main(void)
{
    /*
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");    
    */
    for(int i=0;i<3;i++)
    {
            for(int j=3-i;j>0;j--)
                    smile();
            printf("\n");
    }
    //two ways to realize the function
    system("PAUSE");
    return 0;
}
void smile(void)
{
     printf("Smile!");
}
