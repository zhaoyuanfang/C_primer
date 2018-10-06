#include<stdio.h>
#include<math.h>

int isWan(int x){
	int i=0;
	int sum=0;
	int sig=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	if(sum==x){
		sig=1;
	}
	return sig;
}

int main(){
	int a,b;
	int sym=0;
	scanf("%d %d",&a,&b);
	int count=0;
	int i;
	for(i=a;i<=b;i++){
		if(isWan(i)==1){
			if(sym==1){
				printf(" ");
			}
			printf("%d",i);
			sym=1;
		}
	}
	if(sym==0){
		printf("NIL\n");
	}
	return 0;
}
