//新一天的联系，给自己打打气
#include<stdio.h>
#include<stdlib.h>
void sum(int ar[]);
int main()
{
    int int_array[5]={0,0,0,0,0};
    sum(int_array);
    for(int i =0;i<5;i++)
    {
            printf("%d\n",int_array[i]);
    }
    
    system("PAUSE");
    return 0;
} 
void sum(int ar[])
{
    for(int i = 0; i< 5; i++)
    //这里传进来的变量不是数组，而是指针，虽然处理值时用法相同
    //但是、sizeof ar != sizeof int_array 
    {
            ar[i]++;
            printf("ar[i] is %d\n",ar[i]);
    }
}
