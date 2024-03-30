#include<iostream.h>
#include<conio.h>
#include<string.h>

class student{
 private:
  int Roll_No;
  char Student_Name[10], Student_class[10];
  static int totalStudent;
 public:
 static void inittotalStudent(void){
  totalStudent = 0;
  }
 static void incrementtotalStudent(void){
 totalStudent++;
 }
 static void displaytotalStudent(void){
  cout<<"Total student: "<<totalStudent<<endl;
  }
 void setInfo(void){
   cout<<"Enter the roll number of a student: "<<endl;
   cin>>Roll_No;
   cout<<"Enter the name of the student: "<<endl;
   cin>>Student_Name;
   cout<<"Enter the class of the student: "<<endl;
   cin>>Student_class;
   incrementtotalStudent();
   }

 void getInfo(void){
   cout<<"roll number: "<<Roll_No<<endl;
   cout<<"name: "<<Student_Name<<endl;
   cout<<"class: "<<Student_class<<endl;
   }
 };
 int student::totalStudent = 0;
 void main()
 {
  clrscr();
  student s1,s2;
  s1.setInfo();
  s1.getInfo();
  s2.setInfo();
  s2.getInfo();
  student::displaytotalStudent();
  getch();
 }
