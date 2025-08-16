#include <stdio.h>
void main()
{
int a, b, c;
printf("Enter 2 numbers : ");
scanf("%d, %d", &a, &b);
if(a>=b)
{
c=a-b;
printf("Difference between %d and %d = %d\n", a, b, c);
}
else
{
c=b-a;
printf("Difference between %d and %d = %d\n", a, b, c);
}
}