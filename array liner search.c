#include<stdio.h>
int main()
{
    int a[30]={10,12,33,23,45,343,55};
    int value, pos= -1,i;
    printf("Enter the value you want to search:");
    scanf("%d",&value);
    for(i=0;i<8;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at position %d",pos);
    }
    getch();
}
