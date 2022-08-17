#include<stdio.h>
int main()
{
    int num,sum=0,fact=1,reminder,temp,i;

    printf("enter any number:");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        reminder=temp%10;

        for(i=1;i<=reminder;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==num)
        printf("Strong number");
    else
        printf("Not Strong number");

    return 0;
}
