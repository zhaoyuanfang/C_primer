#include<math.h>
#include<string.h>
#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int max,min;
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	int temp;
	while(max%min!=0){
		temp=max;
		max=min;
		min=temp%max;
	}
	a=a/min;
	b=b/min;
	printf("%d/%d",a,b);
	system("PAUSE");
	return 0;
}
