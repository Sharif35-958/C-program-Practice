#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<20;i++)
    {
        if(i%2==0)
            continue;
            printf("%d\n",i);
        if(i==15)
            break;
    }
    return 0;
}

