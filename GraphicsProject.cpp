#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
//clrscr();
int gd=DETECT,x,y,i,j,d=0,gm;
int rx,ry;
//int random = rand();
initgraph(&gd,&gm," ");
for (int i=0;i<500;i++)
{
    //setfillstyle(1,GREEN);
//floodfill(15+i,230,WHITE);
/*CAR BODY*/
//setfillstyle(1,GREEN);
//floodfill(65+i,230,WHITE);
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);


/*CAR Windows*/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/*Wheels*/
circle(110+i,370,17);
circle(240+i,370,17);
circle(110+i,370,3);
circle(240+i,370,3);
line(110+i,360,110+i,370);
line(84+i,370,100+i,370);
line(93+i,380,110+i,370);
line(118+i,375,110+i,370);
line(128+i,365,110+i,370);

line(240+i,360,240+i,370);
line(214+i,370,240+i,370);
line(233+i,380,240+i,370);
line(250+i,375,240+i,370);
line(258+i,365,240+i,370);

circle(190+i,312,5);//man
line(190+i,315,195+i,330);
line(187+i,314,180+i,330);
//setfillstyle(2,RED);
//floodfill(65+i,230,WHITE);
delay(10);
cleardevice();

line(0,390,639,390);  //ROAD

rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-10)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
            line(rx-20,ry+20,rx,ry);

        delay(2);
        x=(x+10)%639;
        //setfillstyle(1,GREEN);
//floodfill(65+i,230,WHITE);
delay(10);
cleardevice();
}

 getch();
}
