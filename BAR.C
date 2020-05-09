#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
initgraph(&gm,&gd,"c:\\turboc3\\bgi");
bar(100,100,200,200);
getch();
closegraph();
return 0;
}