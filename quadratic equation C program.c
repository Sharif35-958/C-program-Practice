#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("enter  the value of a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    printf("x1= %lf\n",x1);
    printf("x2= %lf\n",x2);
    return 0;
}
