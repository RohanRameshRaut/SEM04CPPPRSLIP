#include<iostream.h>
#include<conio.h>
void main()
{
 int num,i,rem,rev=0;
 clrscr();
 cout<<"Enter a number: ";
 cin>>num;
 while(num!=0)
 {
  rem = num%10;
  rev = rev*10+rem;
  num = num/10;
 }
 cout<<rev;
 getch();
}
