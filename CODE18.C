#include <stdio.h>
void main()
{
int l, b, a, p;
printf("Enter the leangth and breadth of a rectangle : ");
scanf("%d, %d", &l, &b);
a=l*b;
p=2*(l+b);
printf("The area of the rectangle is %d sq. units and its perimeter is %d units\n", a, p);
}