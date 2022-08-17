#include<stdio.h>
int main ()
{
    int i,n;

    printf("enter the value of n:");
    scanf("%d",&n);

    for (i=1;i<=n; i=i+1)
        printf("%d ",i);
    getch();
}
