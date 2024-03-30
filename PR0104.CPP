#include<iostream.h>
#include<conio.h>
void main()
{
 int n,rem,res=0,og;
 clrscr();
 cout<<"Enter a 3 digit number: ";
 cin>>n;
 og=n;
 while(og!=0)
 {
  rem = og%10;
  res = res+(rem*rem*rem);
  og = og/10;
 }
 if(res == n)
 {
  cout<<"Armstrong";
 }
 else{
 cout<<"Not a Armstron";
 }
 getch();
}


