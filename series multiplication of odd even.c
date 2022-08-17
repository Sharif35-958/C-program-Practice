#include<stdio.h>
int main ()
{
    int i,n,multiplies=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++) //for(i=2;i<=n;i=i+2) for(i=1;i<=n;i=i+2)
    {
        multiplies=multiplies*i;
    }
    printf("Multiply= %d",multiplies);

    return 0;

}
