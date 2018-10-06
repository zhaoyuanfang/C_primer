/*-utf-8-C_primer_1_1*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("please input the length in inch.\n");
    float inch;
    scanf("%f",&inch);
    //stdin notice the scanf!!
    printf("this length is %.2fcm.\n",2.54*inch);
    
    system("PAUSE");
    return 0;
}
