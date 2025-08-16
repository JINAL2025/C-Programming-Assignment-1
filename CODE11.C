#include <stdio.h>
void main()
{
float g, kg;
printf("Enter number of grams : ");
scanf("%f", &g);
kg=g/1000;
printf("%f grams = %f kilograms\n", g, kg);
}