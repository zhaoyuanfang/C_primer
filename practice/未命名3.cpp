#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	printf("0.");
	int count=0;
	for(int i=0;i<200;i++)
	{
		printf("%d",10*a/b);
		a = ((10*a)%b);
		if(a==0)
		{
			break;
		}
	}
	printf("\n");
	return 0;
 } 
