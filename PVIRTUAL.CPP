#include<iostream.h>
#include<conio.h>
class Media
{
 public:
 void virtual display() = 0;
};
class NewsPaper:public Media
{
 char Nname[10],Neditor[10];
 int Nprice, Npage;
 public:
 void getData()
 {
  cout<<"Enter the details of NewsPaper\n";
  cout<<"Enter Nname: ";
  cin>>Nname;
  cout<<"Neditor: ";
  cin>>Neditor;
  cout<<"Enter Nprice: ";
  cin>>Nprice;
  cout<<"Enter Npage: ";
  cin>>Npage;
 }
 void display()
 {
  cout<<"\nNewsPaper Details\n";
  cout<<"Name: "<<Nname<<endl;
  cout<<"Editor: "<<Neditor<<endl;
  cout<<"Price: "<<Nprice<<endl;
  cout<<"Pages: "<<Npage<<endl;
 }


};
class Magazine:public Media
{
 char Mname[10], Meditor[10];
 int Mprice;
 public:
 void getDataM()
 {
  cout<<"\nEnter the details of Magazine\n";
  cout<<"Enter Mname: ";
  cin>>Mname;
  cout<<"Meditor: ";
  cin>>Meditor;
  cout<<"Enter Mprice: ";
  cin>>Mprice;
 }
 void display()
 {
  cout<<"\nMagazine Details\n";
  cout<<"Name: "<<Mname<<endl;
  cout<<"Editor: "<<Meditor<<endl;
  cout<<"Price: "<<Mprice<<endl;
 }

};
void main()
{
 NewsPaper n1;
 Magazine m1;
 clrscr();
 n1.getData();
 n1.display();
 m1.getDataM();
 m1.display();

 getch();
}
