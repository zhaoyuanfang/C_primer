#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/*
1 ע��flag�Ĵ�ţ����ܷ���forѭ�����棬����ÿ��forѭ������flag=0�������ڲ�elseʼ���޷�ִ�У�
2 �ж������У�arr[i]��i��ҪŪ���ˣ������߼�����
3 ����˼·���Ȱ�ϵ��������1��ÿ��1���棬����������������2��ÿ��2�����ٰ�ָ����ͬ�����ִ����������Ӧ�����ͬ��ʽ
*/
int main()
{
    int coef,expo;
    int cnt=0;
    int arr[SIZE];
    int i;
    for (i=0;i<SIZE;i++){
        arr[i]=0;
    }
    while(scanf("%d %d",&expo,&coef)){
        arr[expo] += coef; // ��һ������Ҫ����ʵ���ظ��ӣ�����Ҫ���+��
        if (expo == 0) cnt++;
        if (cnt == 2) break;
    }
    //���˼�for �Ա��������
	int flag = 0;
    //���ܷ���forѭ�����棬����ÿ��forѭ������flag=0�������ڲ�elseʼ���޷�ִ�У�
    for (i=SIZE-1;i>=0;i--){
        if (arr[i]>1 || arr[i] <-1){ //�ж������У�arr[i]��i��ҪŪ���ˣ������߼�����
            if (!flag){
                flag = 1;
                if (i>1){
                    printf("%dx%d",arr[i],i);
                }
                else if (i == 1){
                    printf("%dx",arr[i]);
                }
                else{
                     printf("%d",arr[i]);
                }
            }
            else {
                    if (i>1){
                        printf("%+dx%d",arr[i],i);
                    }
                    else if (i == 1){
                        printf("+%dx",arr[i]);
                    }
                    else{
                         printf("+%d",arr[i]);
                    }
            }

        }
        else if (arr[i] == 1){
            flag = 1;
            if (!flag){
                flag = 1;
                if (i>1){
                    printf("x%d",i);
                }
                else if (i == 1){
                    printf("x");
                }
                else{
                     printf("1");
                }
            }
            else {
                    if (i>1){
                        printf("+x%d",i);
                    }
                    else if (i == 1){
                        printf("+x");
                    }
                    else{
                         printf("+1");
                    }
            }

        }
        else if (arr[i] == -1){
            if(!flag){
                flag =1;
                if (i>1){
                    printf("-x%d",i);
                }
                else if (i == 1){
                    printf("-x");
                }
                else {
                    printf("-1");
                }
            }
        }
    }
    if (flag == 0)
        printf("0");

    return 0;
}
