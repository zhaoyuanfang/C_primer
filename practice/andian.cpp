#include<stdio.h>
#include<string.h>
/*
����Ķ����漰�����ֵ����Сֵ��Ψһ��
���ÿ�л�ÿ�е�ֵ��ͬ����ô���ֵ�Ƿ�Ϊ���ֵ
��һ������û��ͨ������֪����ʲô���
���Ա�ֻ֤��һ������
2017��10��28 
*/
int main(){
	int n=0;
	scanf("%d",&n);//read in N
	int arr[n][n];
	int flag[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			flag[i][j]=0;
		}
	}//flag of arr
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}//read in arr[n][n]
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d\t",arr[i][j]);
//		}
//		printf("\n");
//	}
	int max[n];
	int min[n];
	for(i=0;i<n;i++){
		max[i]=0;
		for(j=0;j<n;j++){
			if(arr[i][j]>=max[i]){
				max[i]=arr[i][j];
			}
		}
	}//get rowmax
	for(j=0;j<n;j++){
		min[j]=arr[0][j];
		for(i=0;i<n;i++){
			if(arr[i][j]<=min[j]){
				min[j]=arr[i][j];
			}
		}
	}//get columnmin
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(arr[i][j]<=min[j]){
				flag[i][j]++;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]>=max[i]){
				flag[i][j]++;
			}
		}
	}
	int a=-1;
	int b=-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(flag[i][j]==2){
				a=i;
				b=j;
			}
		}
	}
	if(a>0&b>0){
		printf("%d %d",a,b);
	}
	else{
		printf("NO");
	}
	return 0;
} 
