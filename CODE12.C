#include <stdio.h>
void main()
{
float g, kg;
printf("Enter number of kilograms : ");
scanf("%f", &kg);
g=kg*1000;
printf("%f kilograms = %f grams\n", kg, g);
}