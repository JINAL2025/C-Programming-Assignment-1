#include <stdio.h>
void main()
{
float g, n;
printf("Enter the gross sale amount : ");
scanf("%f", &g);
n=g-((10*g)/100);
printf("The net sale amount is %f \n", n);
}