#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main(int argc, char *argv[])
{
 int num[20], size, i;
 clrscr();
 cout<<"Enter the size of an array: ";
 cin>>size;
 for(i=0;i<size;i++)
 {
  cout<<"Enter "<<i+1<<" : "<<endl;
  cin>>num[i];
 }
 if(argc<2)
 {
  cout<<"Invalid argument!"<<endl;
 }
 else
 {
  ofstream fout, fout01;
  fout.open(argv[1]);
  for(i=0;i<size;i++)
  {
   if(num[i]%2==0)
   {
    fout<<num[i]<<"\n";
   }
  }
  fout.close();
  fout01.open(argv[2]);
  for(i=0;i<size;i++)
  {
   if(num[i]%2!=0)
   {
    fout01<<num[i]<<"\n";
   }
  }
  fout01.close();

  ifstream fin, fin01;
  char st, st01;
  fin.open(argv[1]);
  cout<<"even.txt file"<<endl;
  for(i=0;i<size;i++)
  {
   while(fin.get(st))
   {
    cout<<st<<endl;
   }
  }
  fin.close();
  cout<<"\nodd.txt file"<<endl;
  fin01.open(argv[2]);
  for(i=0;i<size;i++)
  {
   while(fin.get(st01))
   {
    cout<<st01<<endl;
   }
  }
 }
  getch();
}