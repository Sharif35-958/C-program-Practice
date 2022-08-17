#include<stdio.h>
int main()
{
    while(1)
    {
      int num,i,x;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,x=num*i);
    }
    }

    return 0;
}
