#include<stdio.h.
#include<conio.h>
int main()
{
int l,b,h,tsa,vol;
clrscr();
printf("\nEnter the cuboid length);
scanf("%d",&l);
printf("\nEnter the cuboid breadth);
scanf("%d",&b);
printf("\nEnter the cuboid height);
scanf("%d",&h);
tsa=2(l*b+b*h+h*l);
v=(l*b*h);
printf("\nThe cuboid total surface area is %d",tsa);
printf("\nThe cuboid volume is %d",v);
getch();
}
