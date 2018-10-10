//继续理解数组和指针
#include<stdio.h>
#include<stdlib.h>
int sum(int * start ,int * end);
int main(void)
{
    int array[5]={1,2,3,4,5};
    int answer;
    printf("num_now is %d\n",*array);
    answer=sum(array,array+5);
    printf("num_after is %d\n",*array);
    
    printf("the sum is %d\n",answer);
    
    system("PAUSE");
    return 0;
} 
int sum(int * start,int *end)
{
    int total=0;
    while(start<end)
    {
                    total+=*start;
                    printf("start is %d\n",*start);
                    start++;
                    printf("start is %d\n",*start);
    }
    
    return total;
}
