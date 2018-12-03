#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("will it be terminal?\n");
    func(666);
    printf("\\n");
    system("PAUSE");
    return  0;
}
int func(int num)
{
    printf("%d\n",num);
    printf("good bye!!!!without return to main!!\n");
    system("PAUSE");
    exit(0);
} 
