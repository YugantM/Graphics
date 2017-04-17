#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int mx,my;

inline void ready(){

	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	mx=getmaxx()/2;
	my=getmaxy()/2;
}

inline void stop(){
	getch();
	closegraph();
}



void main()
{
	ready();

	for(float t=0;t<=mx*2;t++)
	{
		setcolor(t);
		putpixel(t,my-60*tan(t*3.14/180),3);
		line(t,my-60*tan(t*3.14/180),t,my);
	}
	line(0,my,mx*2,my);
	stop();
}