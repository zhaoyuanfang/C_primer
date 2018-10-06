#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	int count = 0;
	int num = 0;
	while(a>0)
	{
		count ++;
		if(((a%10)+count)%2==0)
		{
			num = num + pow(2,count);
		}
		a = a/10;
	}
	printf("%d",num);
 } 
