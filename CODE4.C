#include <stdio.h>
void main()
{
int a, b, c, d;
printf("Enter 2 numbers : ");
scanf("%d, %d", &a, &b);
c=a/b;
d=b/a;
printf("%d/%d = %d\n", a, b, c);
printf("%d/%d = %d\n", b, a, d);
}