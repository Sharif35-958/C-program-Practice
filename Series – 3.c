#include<stdio.h>
int main()
{
    int n1,n2,a=1,b=2,sum;

    printf("Enter n1 and n2 :");
    scanf("%d %d",&n1,&n2);

    while(a<=n1&& b<=n2)
    {
        sum=sum+ a*b;
        a++;
        b++;
    }

    printf("SUM= %d",sum);

    return 0;
}
