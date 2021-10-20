#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int a[10]={1,2,3,4,5};
int pos,num,i;
cout<<"enter the position and number of the array "<<endl;
cin>>pos>>num;
for(i=4;i>=pos; i--)
{
a[i+1]=a[i];
}
a[pos]=num;
cout<<"now array is "<<endl;
for(i=0; i<6;i++)
{
cout<<a[i];
}
getch();
}