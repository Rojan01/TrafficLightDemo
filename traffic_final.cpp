#include <graphics.h>
#include <dos.h>
#include <stdio.h>

int disp(int x);
int red();
int yellow();
int green();
int car(int s);
int main()
{
	int gd=DETECT,gm,x,y,i,s=0,j;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	x=getmaxx();


	for(j=1;j<=3;j++)
    {

	for(i=1;i<800;i+=5)
	{

		if(i<530)
		{
		    disp(x);
			car(s);
			s+=3;
			delay(30);
			cleardevice();
			green();
		}
		else if(i>530 && i<560)
		{
			disp(x);
			car(s);
			s++;
			delay(30);
			cleardevice();
			yellow();
		}

		else if(i>560 && i<670)
		{
			disp(x);
			car(s);
			delay(30);
			cleardevice();
			red();
		}

		else if(i>670 && i<700)
		{
			disp(x);
			car(s);
			delay(30);
			cleardevice();
			yellow();
		}

		else if(i>700 && i<800)
		{
			disp(x);
			car(s);
			s+=3;
			delay(30);
			cleardevice();
			green();
		}

    }

    s=0;

    }
    outtextxy(x/2,400,"Traffic Light Simulator by blaze");
	closegraph();

}
int disp(int x)
{


	//road
	setfillstyle(SOLID_FILL,DARKGRAY);
	rectangle(0,392,639,479);
	floodfill(403,403,WHITE);

	//sky
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(0,0,x,391);
	floodfill(1,383,WHITE);

	//traffic light stand
	setfillstyle(SOLID_FILL,BLACK);
	bar(500,150,510,392);

	//traffic light rectangle
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(475,50,535,150);
	floodfill(476,149,WHITE);

	//sun
	setfillstyle(SOLID_FILL,YELLOW);
	circle(50,50,25);
	floodfill(50,50,WHITE);

	//cloud
    setfillstyle(SOLID_FILL,WHITE);
	circle(150,75,20);
	floodfill(150,75,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(180,75,20);
	floodfill(180,75,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(200,95,20);
	floodfill(200,95,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(180,110,20);
	floodfill(181,110,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(150,100,20);
	floodfill(151,100,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(130,95,20);
	floodfill(130,95,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(250,115,20);
	floodfill(250,114,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(270,115,20);
	floodfill(270,114,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(280,135,20);
	floodfill(280,134,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	circle(300,125,20);
	floodfill(300,124,WHITE);

}
int red()
{
	setfillstyle(SOLID_FILL,RED);
	circle(505,70,13);
	floodfill(505,70,WHITE);

}

int yellow()
{

	setfillstyle(SOLID_FILL,YELLOW);
	circle(505,100,13);
	floodfill(505,100,WHITE);


}

int green()
{
	setfillstyle(SOLID_FILL,GREEN);
	circle(505,130,13);
	floodfill(505,130,WHITE);
}

int car(int s)
{

    setfillstyle(SOLID_FILL,BLUE);
    rectangle(55+s,345,100+s,365);
    floodfill(56+s,360,WHITE);

	//line 3
    line(20+s,365,150+s,365);

    //line 1
    line(25+s,365,55+s,345);
    //line 2
    line(100+s,345,140+s,365);
    //line 4
    line(20+s,365,20+s,385);
    //line 5
    line(150+s,365,150+s,385);
    //line 6
    line(20+s,385,40+s,385);
    //line 7
    line(130+s,385,150+s,385);
    //line 8
    line(60+s,385,110+s,385);
    //arc 1
    arc(50+s,385,0,180,10);
    //arc 2
    arc(120+s,385,0,180,10);

    //circle 1
    setfillstyle(BKSLASH_FILL,BLACK);
    circle(50+s,385,7);
    floodfill(50+s,384,WHITE);

    //circle 2
    setfillstyle(BKSLASH_FILL,BLACK);
    circle(120+s,385,7);
    floodfill(120+s,384,WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    circle(50+s,385,1);
    floodfill(50+s,384,WHITE);

    setfillstyle(SOLID_FILL,WHITE);
    circle(120+s,385,1);
    floodfill(120+s,384,WHITE);

}
