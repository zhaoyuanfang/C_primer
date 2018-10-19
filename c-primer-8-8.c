/*-utf-8-C-primer-8-8*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char get_choice(void);
double get_double(void);
char get_first(void);
int main(void)
{
        double ans=0;
        double num1=0;
        double num2=0;
        char choice;
        while((choice=get_choice())!='q')
        {
                                         printf("Enter the first number:");
                                         num1=get_double();
                                         printf("Enter the second number:");
                                         num2=get_double();
                                         switch(choice)
                                         {
                                                       case 'a':
                                                            printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
                                                            break;
                                                       case 's':
                                                            printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
                                                            break;
                                                       case 'm':
                                                            printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
                                                            break;
                                                       case 'd':
                                                            printf("%lf / %lf = %f\n",num1,num2,num1/num2);
                                                            break;
                                                       default:
                                                            printf("Program error~!\n");
                                                            break;                                                       
                                         }
        }
        printf("Bye~!\n");
        system("PAUSE");
        return 0;
}
char get_choice(void)
{
     int ch;
     printf("Enter the operation of your choice:\n");
     printf("a.add       s.subtract\n");
     printf("m.multiply  d.divide\n");
     printf("q.quit\n");
     ch = get_first();
     while((ch<'a'||ch>'z')&&ch!='q')
     {
                                     printf("Please respond with a,s,m,d,or q!\n");
                                     ch=get_first();
     }
     return ch;
}
char get_first(void)
{
     int ch;
     ch = getchar();
     while(getchar()!='\n')
                           continue;
     return ch;
}
double get_double(void)
{
       double input;
       char ch;
       while(scanf("%lf",&input)!=1)
       {
                                   while((ch=getchar())!='\n')
                                                              putchar(ch);
                                   printf(" is not an double number.\nPlease enter an ");
                                   printf("double value, such as 11.2, -5.0, or 3: ");
       }
       return input;
}
