#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    int queue[50],t_cy,head,i,n,seek[50],sum=0;
    float avg=0.00;
    clrscr();
    cout<<"Enter the no of requests:";
    cin>>n;
    cout<<"Enter the total cylinders:";
    cin>>t_cy;
    cout<<"Enter the current head position:";
    cin>>head;
    cout<<"Enter the requests you want to serve:";
    for(i=0;i<n;i++)
    {
	cin>>queue[i];
    }
    for(i=1;i<=n;i++)
    {

	 seek[i]=abs(head-queue[i-1]);
	 head=queue[i-1];
	 cout<<"\nseek time="<<seek[i];
	 sum=sum+seek[i];
    }
    avg=sum/n;
    cout<<"\nAverage seek time:"<<avg;
    getch();
}