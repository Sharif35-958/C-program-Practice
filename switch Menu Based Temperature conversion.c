#include<stdio.h>
int main()
{
    int choice;
    float temp,Converted_Temp;
    printf("Temperature Conversion Menu\n");
    printf("1.Fahrenheit to Celsius\n");
    printf("2.Celsius to Fahrenheit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        printf("Enter the Fahrenheit temperature:");
        scanf("%f",&temp);
        Converted_Temp= (temp-32)/1.8;
        printf("The temperature is Celsius is : %f",Converted_Temp);
        break;


    case 2:
        printf("Enter the Celsius temperature:");
        scanf("%f",&temp);
        Converted_Temp= (temp*1.8)+32;
        printf("The temperature is fahrenheit is : %f",Converted_Temp);
        break;


    }

    getch();
}
