#include <stdio.h>
void main()
{
int l, a, p;
printf("Enter length of the side of a square : ");
scanf("%d", &l);
a=l*l;
p=l*4;
printf("The area and perimeter of the square are %d sq. units and %d units respectively\n", a, p);
}