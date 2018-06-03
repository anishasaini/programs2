#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
double d,x1,x2,y1,y2,dx,dy;
int i;
cout<<"enter the start and end coordinate";
cin>>x1>>y1>>x2>>y2;
 dx=x2-x1;
 dy=y2-y1;
 d=2*dy-dx;
 cout<<d;
 getche();
   int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\BGI\\");
  putpixel(x1,y1,RED);
  i=x1;
 while(i!=x2)
 {
 x1++;
// cout<<x1<<" : ";
if(d>=0)
	{  y1=y1+1;
	d=d+2*(dy-dx);
	putpixel(x1,y1,RED);
	}
	else
	{
	 d=d+2*dy;
	  y1=y1;	      putpixel(x1,y1,RED);
	}

	i++;

 }
getche();
}