#include<iostream.h>
#include<conio.h>
void main()
{
int n,x[20],s[20],i,w=0;
clrscr();
cout<<"Enter the no of processes";
cin>>n;
cout<<"Enter the processes";
for(i=0;i<n;i++)
{
cin>>x[i] ;
}

cout<<"enter each process's execution time";
for(i=0;i<n;i++)
{
      cin>>s[i];
}
cout<<"Execution sequence:";
for(i=0;i<n;i++)
{
   cout<<x[i]<<"\n";
}
for(i=0;i<n;i++)
{
    if(i==0)
    {
      w=0;
      cout<<"";
    }
    else
    {
       w=w+s[i];
    }
    cout<<"\nThe waiting time of process "<<x[i]<<" is"<<w;
}
getch();
}