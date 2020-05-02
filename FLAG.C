#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int main()
{
int gd,gm;
int r,i,a,b,x,y;
float PI=3.14;

detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

setcolor(RED);
rectangle(100,100,450,150);
setfillstyle(SOLID_FILL,RED);
floodfill(101,101,RED);

setcolor(WHITE);
rectangle(100,150,450,200);
setfillstyle(SOLID_FILL,WHITE);
floodfill(101,151,WHITE);

setcolor(GREEN);
rectangle(100,200,450,250);
setfillstyle(SOLID_FILL,GREEN);
floodfill(101,201,GREEN);
a=275;
b=175;
r=25;
setcolor(BLUE);
circle(a,b,r);
for(i=0;i<=360;i++)
{
x=r*cos(i*PI/180);
y=r*sin(i*PI/180);
line(a,b,a+x,b-y);
}
getch();
closegraph();
return 0;
}
