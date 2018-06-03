#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    clrscr();
    int queue[50],i,j,total_cylinders,head,n,sort[50],z,g=0,s=0,pos,seek[50];
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
    for(i=n+1;i>0;i--)
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
    for(i=0;i<=n;i++)
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
    if(g>s)
    {
       for(i=0;i<n;i++)
       {
	   if(pos==n)
	   {
	     seek[i]=abs(head-sort[0]);
	     pos=0;
	     head=sort[0];
	   }
	   else
	   {
	       seek[i]=abs(head-sort[pos+1]);
	       head=sort[pos+1];
	       pos++;
	   }

	   cout<<"head="<<head;
	   cout<<"seek="<<seek[i];
       }
    }
    else
    {
	for(i=0;i<n;i++)
       {
	   if(pos==0)
	   {
	     seek[i]=abs(head-sort[n]);
	     pos=n;
	     head=sort[n];
	   }
	   else
	   {
	       seek[i]=abs(head-sort[pos-1]);
	       head=sort[pos-1];
	       pos--;
	   }

	   cout<<"head="<<head;
	   cout<<"seek="<<seek[i];
       }
    }
    getch();
}