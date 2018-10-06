#include<stdio.h>
#include<math.h>

int main(){
	float dis;
	int time;
	scanf("%f %d",&dis,&time);
	float fee=10;
	//distance fee
	if(dis>3)
	{
		fee+=2*(dis-3);
		if(dis>10)
		{
			fee+=(dis-10);
		}
	}
	//time fee
	fee+=(time/5)*2;
	printf("%.0f\n",fee);
	return 0;
}
