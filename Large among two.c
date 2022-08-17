#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(a>b)
        printf("%d is bigger than %d",a,b);
    else if(a<b)
        printf("%d is bigger than %d",b,a);
    else
        printf("Numbers are equal");
    return 0;
}
