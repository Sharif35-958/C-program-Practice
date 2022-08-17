#include<stdio.h>
int main()
{
    int a1[5]={1,2,3,4,5},a2[5],i;

    printf("Array1: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a1[i]);
    }
    for(i=0;i<5;i++)
    {
        a2[i]=a1[i];
    }

    printf("\nArray2: ");

    for(i=0;i<5;i++)
    {
        printf("%d ",a2[i]);
    }
    getch ();
}
