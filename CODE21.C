#include <stdio.h>
void main()
{
float g, a, d, net;
printf("Enter your gross salary : ");
scanf("%f", &g);
a=(10*g)/100;
d=(3*g)/100;
net=g+a-d;
printf("Your net salary is %f \n", net);
}