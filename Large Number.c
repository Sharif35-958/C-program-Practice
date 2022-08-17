#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("%d is large",num1);

    }
    else if(num1<num2)
    {
        printf("%d is large",num2);

    }
    else
    {
        printf("numbers are equal");
    }
    return 0;
}
