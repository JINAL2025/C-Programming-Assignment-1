#include <stdio.h>
void main()
{
float h, m;
printf("Enter number of minutes : ");
scanf("%f", &m);
h=m/60;
printf("%f minutes make %f hours\n", m, h);
}
