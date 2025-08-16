#include <stdio.h>
void main()
{
float r, d, p;
printf("Enter number of Dollars : ");
scanf("%f", &d);
r=d*48;
p=r/70;
printf("%f Dollars are equal to %f Pounds\n", d, p);
}