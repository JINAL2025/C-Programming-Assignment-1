#include <stdio.h>
void main()
{
int a, b, c, d, e, f;
printf("Enter 2 numbers : ");
scanf("%d, %d", &a, &b);
c=a+b;
printf("%d + %d = %d\n", a, b, c);
e=a*b;
printf("%d*%d = %d\n", a, b, e);
if(a>=b)
{
d=a-b;
printf("%d - %d = %d\n", a, b, d);
f=a/b;
printf("%d/%d = %d\n", a, b, f);
}
else
{
d=b-a;
printf("%d - %d = %d\n", b, a, d);
f=b/a;
printf("%d/%d = %d\n", b, a, f);
}
}
