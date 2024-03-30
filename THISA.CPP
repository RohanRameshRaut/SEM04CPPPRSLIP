#include<iostream.h>
#include<conio.h>

class Student
{
 int roll;
 char Sname[20];
 float percentage;
 public:
 void getData()
 {
  cout<<"Enter the Sname: ";
  cin>>Sname;
  cout<<"Enter the roll: ";
  cin>>roll;
  cout<<"Enter the percentage: ";
  cin>>percentage;
 }
 void display()
 {
  cout<<"\nStudent Details with Max percentage"<<endl;
  cout<<"Student name: "<<Sname<<endl;
  cout<<"Student roll: "<<roll<<endl;
  cout<<"Student percentage: "<<percentage<<endl;
 }
 void max(Student &s2)
 {
  if(this->percentage<s2.percentage)
  {
   s2.display();
  }
  else
  {
   this->display();
  }
 }
};
void main()
{
 Student s1,s2;
 clrscr();
 s1.getData();
 s2.getData();
 s1.max(s2);

 getch();
}

