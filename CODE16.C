#include <stdio.h>
void main()
{
float i, p, r, n;
printf("Enter the principal amount, rate of interest and time duration repectively : ");
scanf("%f, %f, %f", &p, &r, &n);
i=p*r*n/100;
printf("The interest is Rs.%f \n", i);
}