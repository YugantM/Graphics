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


void main(){


	ready();

	int t=0,a,b,m=45,d=45;
	setcolor(3);

	while(1>0)
	{

		setcolor(3);
		a=0,b=90;
		line(mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=90,b=180;
		setcolor(4);
		line(mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=180,b=270;
		setcolor(5);
		line(mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=270,b=0;
		setcolor(6);
		line(mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));

		a=0,b=90;
		setcolor(7);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),d+mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=90,b=180;
		setcolor(8);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),d+mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=180,b=270;
		setcolor(9);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),d+mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=270,b=0;
		setcolor(1);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),d+mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));

		a=0,b=a;
		setcolor(2);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=90,b=a;
		setcolor(14);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=180,b=a;
		setcolor(10);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));
		a=270,b=a;
		setcolor(1);
		line(d+mx+(100*cos((t+a)*3.14/180))*cos(m*3.14/180),my+100*sin((t+a)*3.14/180),mx+(100*cos((t+b)*3.14/180))*cos(m*3.14/180),my+100*sin((t+b)*3.14/180));


		//m++;
		t++;
		delay(10);
		cleardevice();

		if(kbhit())
		{
			stop();
		}
	}

}