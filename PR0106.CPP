#include<iostream.h>
#include<conio.h>
void main()
{
 int num,i,j,k;
 clrscr();
 cout<<"Enter the number: ";
 cin>>num;
 for(i=1;i<=num;i++)
 {
  for(j=1;j<=(num-i);j++)
  {
   cout<<".";
  }
  for(k=1;k<=i;k++)
  {
   cout<<"*";
  }
  cout<<"\n";
 }

 getch();
}