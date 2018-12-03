/*-utf-8-c_primer-10.10*/
#include<stdlib.h>
#include<stdio.h>
#define LENGTH 4
void add(double *array1, double *array2, double *array3, int length);
int main(void)
{
	double array1[LENGTH] = {1.1,2.2,3.3,4.4};
	double array2[LENGTH] = {2.1,3.2,4.3,5.4};
	double array3[LENGTH];
	int i;
	add(array1,array2,array3,LENGTH);
	for(i = 0;i<LENGTH;i++)
	{
		printf("%.2f   ",array3[i]);
	}
	system("PAUSE");
	return 0;
 } 
void add(double *array1, double *array2, double *array3, int length)
{
	int i;
	for(i=0;i<LENGTH;i++)
	{
		*(array3+i)=*(array1+i)+*(array2+i);
	}
}
