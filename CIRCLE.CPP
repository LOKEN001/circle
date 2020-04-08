#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int x, y, r;
 initgraph(&gd,&gm,"c://TURBOC3//BGI");
 printf("\nEnter the cordination point and radius:\n");
 scanf("%d %d %d",&x,&y,&r);
 circle(x,y,r);
 getch();
 closegraph();
 return 0;
}