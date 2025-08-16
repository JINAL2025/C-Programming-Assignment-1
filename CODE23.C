#include <stdio.h>
void main()
{
int a, b, c, d, e;
printf("Enter your marks in three subjects : ");
scanf("%d, %d, %d", &a, &b, &c);
d=a+b+c;
e=d/3;
printf("Your total marks are %d\n", d);
printf("Your average marks are %d\n", e);
}