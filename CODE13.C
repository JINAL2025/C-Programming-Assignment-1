#include <stdio.h>
void main()
{
double b, kb, mb, gb;
printf("Enter number of bytes : ");
scanf("%lf", &b);
kb=b/1000;
mb=b/1000000;
gb=b/1000000000;
printf("%lf bytes are equal to %lf KB, %lf MB and %lf GB respectively\n", b, kb, mb, gb);
}