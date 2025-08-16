#include <stdio.h>
void main()
{
float c, d, e, f;
printf("Enter temperature in Celcius : ");
scanf("%f", &c);
d=c*9;
e=d/5;
f=e+32;
printf("The temperature in Fahrenheit is %f \n", f);
}