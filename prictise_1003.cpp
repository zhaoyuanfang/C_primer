//��һ�����ϵ�����Լ������
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
    //���ﴫ�����ı����������飬����ָ�룬��Ȼ����ֵʱ�÷���ͬ
    //���ǡ�sizeof ar != sizeof int_array 
    {
            ar[i]++;
            printf("ar[i] is %d\n",ar[i]);
    }
}
