#include<stdio.h>
int main()
{
    int num1=4,num2=10;

    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("Num1= %d\n Num2= %d\n",num1,num2);
    return 0;
}
