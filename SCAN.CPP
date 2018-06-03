#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    clrscr();
    int queue[50],i,j,total_cylinders,head,n,sort[50],z,g=0,s=0,pos,seek[50],initial;
    cout<<"Enetr the total no of cylinders:";
    cin>>total_cylinders;
    cout<<"Enter the total no of requests:";
    cin>>n;
    cout<<"Enter the requests:";
    for(i=0;i<n;i++)
    {
	cin>>queue[i];
	sort[i]=queue[i];
    }
    cout<<"Enter the current head:";
    cin>>head;
    sort[n]=head;
    sort[n+1]=0;
    sort[n+2]=total_cylinders-1;
    for(i=n+2;i>0;i--)
    {
       for(j=0;j<i-1;j++)
       {
	   if(sort[j]>sort[j+1])
	   {
	       z=sort[j];
	       sort[j]=sort[j+1];
	       sort[j+1]=z;
	   }
       }
    }
    for(i=0;i<=n+2;i++)
    {
	if(sort[i]>head)
	{
	  g++;
	}
	else if(sort[i]<head)
	{
	   s++;
	}
	if(head==sort[i])
	{
	   pos=i;
	}
    }
    initial=pos;
    if(g>s)
    {
       for(i=0;i<n+2;i++)
       {
	   if(pos<initial)
	   {
	     seek[i]=abs(head-sort[pos-1]);

	     head=sort[pos-1];
	     pos--;
	   }
	   else
	   {

	       if(head==sort[n+2])
	       {

		     pos=initial;
		     seek[i]=abs(head-sort[pos-1]);
		     head=sort[pos-1];
		     pos--;
	       }
	       else
	       {
		seek[i]=abs(head-sort[pos+1]);
	       head=sort[pos+1];
	       pos++;
	       }
	   }

	   cout<<"head="<<head;
	   cout<<"seek="<<seek[i];
       }
    }
    else
    {
	for(i=0;i<n+2;i++)
       {
	   if(pos>initial)
	   {
	     seek[i]=abs(head-sort[pos+1]);
	     head=sort[pos+1];
	     pos++;
	   }
	   else
	   {
	       if(head==sort[0])
	       {
		     pos=initial;
		     seek[i]=abs(head-sort[pos+1]);
		     head=sort[pos+1];
		     pos++;
	       }
	       else
	       {
	       seek[i]=abs(head-sort[pos-1]);
	       head=sort[pos-1];
	       pos--;
	       }
	   }

	   cout<<"head="<<head;
	   cout<<"seek="<<seek[i];
       }
    }
    getch();
}