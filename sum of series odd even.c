#include<stdio.h>
int main ()
{
    int sum=0,i,n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    //for(i=1;i<=n;i=i+2)
    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }

    printf("\nsum = %d",sum);

    getch();


}
