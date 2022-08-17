#include<stdio.h>
#include<math.h>
int main()
{
    float r,area;

    printf("Enter radius:");
    scanf("%f",&r);

    area=M_PI*r*r;
    printf("Area of circle: %f",area);
    return 0;
}
