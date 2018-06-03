#include<iostream.h>
#include<conio.h>
void main()
{
int n,x[20],s[20],i,w=0,j,u,h;
clrscr();
cout<<"Enter the no of processes";
cin>>n;
cout<<"Enter the processes";
for(i=0;i<n;i++)
{
cin>>x[i] ;
}

cout<<"enter each process's execution time:";
for(i=0;i<n;i++)
{
      cin>>s[i];
}
cout<<"Execution sequence:";
for(i=n;i>0;i--)
{
for(j=0;j<i-1;j++)
{
   if(s[j]>s[j+1])
   {
      u=s[j];
      s[j]=s[j+1];
      s[j+1]=u;
      h=x[j];
      x[j]=x[j+1];
      x[j+1]=h;
   }
}
}
for(i=0;i<n;i++)
{
  cout<<"\n"<<x[i];
  cout<<s[i];
}
for(i=0;i<n;i++)
{
    if(i==0)
    {
      w=0;
      cout<<"\nThe waiting time0f process "<<x[i]<<" is"<<w;

    }
    else
    {

       w=w+s[i-1];
	cout<<"\nThe waiting time of process "<<x[i]<<" is"<<w;
    }
}
getch();
}