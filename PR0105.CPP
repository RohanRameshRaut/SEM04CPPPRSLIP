#include<iostream.h>
#include<conio.h>
void main()
{
 char ch ='A';
 int num,i,j;
 clrscr();
 cout<<"Enter the number: ";
 cin>>num;
 for(i=0;i<num;i++)
 {
  for(j=0;j<=i;j++)
  {
   cout<<ch<<" ";
   ch++;

  }
  cout<<"\n";
 }
 getch();
}


