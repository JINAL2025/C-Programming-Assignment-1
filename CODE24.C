#include <stdio.h>
void main()
{
int a, b, c;
printf("Enter two values, a and b : ");
scanf("%d, %d", &a, &b);
c=a;
a=b;
b=c;
printf("After swapping, a=%d and b=%d\n", a, b);
}