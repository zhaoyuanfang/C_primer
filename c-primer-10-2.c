/*-utf-8-C_Primer-10.2*/
#include<stdio.h>
#define SIZE 5
void copy_arr(double ar[], double a[],int n);
void copy_ptr(double *a, double *b,int n);
void copy_ptrs(double *a, double *b,double *end);
int main()
{
	int i;
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];
	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, source+SIZE);
	for(i = 0; i < SIZE; i++)
	{
		printf("target3[%d] = %.2lf", i, target3[i]);
		printf("\n");
	}
	return 0;
}
void copy_arr(double ar[], double a[],int n)
{
	int i;
	for(i = 0; i< n; i++)
		ar[i] = a[i];
	for(i = 0; i< n; i++)
	{
		printf("target1[%d] = %.2lf", i, ar[i]);
		printf("\n");
	}
}
void copy_ptr(double *a, double *b,int n)
{
	int i;
	for(i = 0; i< n; i++)
		*(a+i) = *(b+i);
	for(i = 0; i< n; i++)
	{
		printf("target2[%d] = %.2lf", i, a[i]);
		printf("\n");
	}
}
void copy_ptrs(double *a, double *b,double *end)
{
	while(b<end)
	{
		*a = *b;
		b++;
		a++;
	}
}
