#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=5; i++)
    {
        printf(" %d ",i);
    }
    printf("\n");

    for(i=2; i<=10; i=i+2)
    {
        printf(" %d ",i);

    }

    printf("\n");

    for(i=3; i<=15; i=i+3)
    {
        printf(" %d ",i);
    }
    printf("\n");

    for(i=4; i<=20; i=i+4)
    {
        printf(" %d ",i);
    }
    printf("\n");

    for(i=5; i<=25; i=i+5)
    {
        printf(" %d ",i);
    }

    getch();
}
