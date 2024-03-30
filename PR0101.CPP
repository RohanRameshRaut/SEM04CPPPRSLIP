#include<iostream.h>
#include<conio.h>
void main()
{
 int num,i;
 clrscr();
 cout<<"Enter a number: "<<endl;
 cin>>num;

 for(i=1;i<=10;i++)
 {
  cout<< num <<" X "<<i<<" = "<<num*i<<endl;
 }
 getch();
}