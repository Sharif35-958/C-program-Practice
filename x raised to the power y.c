#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("enter value of y:");
    scanf("%d",&y);

    double result=pow(x,y);
    printf("%.2lf",result);
    return 0;
}
