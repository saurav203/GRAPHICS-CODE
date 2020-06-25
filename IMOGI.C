#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

setcolor(YELLOW);
circle(200,200,70);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(200,200,YELLOW);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(220,177,2,6);
fillellipse(180,177,2,6);
ellipse(200,200,205,335,20,9);
ellipse(200,200,205,335,20,10);
getch();
closegraph();
return 0;
}