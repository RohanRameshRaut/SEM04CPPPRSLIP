#include<iostream.h>
#include<conio.h>
void main()
{
 int n1=0,n2=1,n,next,i;
 clrscr();
 cout<<"Enter the value of n: ";
 cin>>n;

 for(i=0;i<n;i++)
 {
  if(i<=1)
  {
   next = i;
  }
  else{
   next = n1+n2;
   n1 = n2;
   n2 = next;
  }
  cout<<next<<endl;
 }

 getch();
}


