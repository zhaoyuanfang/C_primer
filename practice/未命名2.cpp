#include<stdio.h>
#include<math.h>
int main(){
	int a=0;
	int t=0;
	scanf("%d",&a);
	if(a<0){
		printf("fu ");
		a = -a;
	}
	t = a;
	int mask =1;
	while(a>9){
		mask *= 10;
		a=a/10;
	}
	int d;
	while(mask>0){
		d = t / mask;
		if(d==0){
			printf("ling");
		}
		if(d==1){
			printf("yi");
		}
		if(d==2){
			printf("er");
		}
		if(d==3){
			printf("san");
		}
		if(d==4){
			printf("si");
		}
		if(d==5){
			printf("wu");
		}
		if(d==6){
			printf("liu");
		}
		if(d==7){
			printf("qi");
		}
		if(d==8){
			printf("ba");
		}
		if(d==9){
			printf("jiu");
		}
		if(mask>9){
			printf(" ");
		}
		t%=mask;
		mask /=10;
	}
	return 0;
} 
