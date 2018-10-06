#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char time[20];
	scanf("%s",time);
	char *result=NULL;
	result=strtok(time,"/");
	while(result!=NULL)
	{
		printf("%s\n",result);
		printf("%d\n",atoi(result));
		result=strtok(NULL,"/");
	}
	return 0;
}
