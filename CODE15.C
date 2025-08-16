#include <stdio.h>
void main()
{
float c, d, e, f;
printf("Enter temperature in Fahrenheit : ");
scanf("%f", &f);
e=f-32;
d=e/9;
c=d*5;
printf("The temperature in Celcius is %f \n", c);
}