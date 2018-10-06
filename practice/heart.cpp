#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 10
int main(){
	printf("我是雷神托尔!!!!\n");
	printf("请输入手机解锁密码:\n");
	int x;
	scanf("%d",&x); 
	for(float y=1.5f;y>-1.5f;y-=0.1f){
		for(float x=-1.5f;x<1.5f;x+=0.05f){
			float a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		putchar('\n');
	}
	scanf("%d",&x);
	printf("我爱你啊小猪猪，我是托尔啊！！\n");
	return 0;
}
