#include<stdio.h>
int main()
{
    while(1)
    {
         int i,num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
        break;
        }
    }
    if(count==0)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");

    }

    return 0;
}
