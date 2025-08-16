#include <stdio.h>
void main()
{
int m, h;
printf("Enter number of hours : ");
scanf("%d", &h);
m=h*60;
printf("The number of minutes in %d hours is %d\n", h, m);
}