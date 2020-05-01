#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x,x1,x2,y,y1,y2,dx,dy,length,i,xinc,yinc,p;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("\n enter first points(x1,y1):");
scanf("%d%d",&x1,&y1);
printf("\n enter second points(x2,y2):");
scanf("%d%d",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
p=2*dy-dx;
x=x1;
y=y1;
i=0;
while(i<=dx)
{
putpixel(x,y,WHITE);
sleep(1);
if(p<0)
{
x=x+1;
p=p+2*dy;
}
else
{
x=x+1;
y=y+1;
p=p+2*dy-dx;
}
i++;
}
getch();
}








