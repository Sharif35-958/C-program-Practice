#include<stdio.h>
int main()
{
    float i,n,sum=0;

    printf("Enter the value of n:");
    scanf("%f",&n);

    for(i=1;i<=n;i++)

    {
        sum=sum+i*i;
    }

    printf("Sum= %.2f",sum);

    getch();
}

