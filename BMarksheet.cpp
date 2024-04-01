#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// chatGPT
class Marksheet
{
    int sno;
    int Int_marks[10], Ext_marks[10], total[10], gTotal;
    double percentage;
    char sname[20], cname[10], grade;
    string subname[10];

public:
    void getData()
    {
        cout << "Enter sno: ";
        cin >> sno;
        cout << "Enter sname: ";
        cin >> sname;
        cout << "Enter cname: ";
        cin >> cname;
        cout << "Enter Subject Names and Marks (Internal & External) for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter subname " << i + 1 << ": ";
            cin >> subname[i];
            cout << "Enter Int_marks " << i + 1 << " :";
            cin >> Int_marks[i];
            cout << "Enter Ext_marks " << i + 1 << ": ";
            cin >> Ext_marks[i];
            total[i] = Int_marks[i] + Ext_marks[i];
        }
        calculateGrandTotal();
        calculatePercentage();
        calculateGrade();
    }
    void calculateGrandTotal()
    {
        gTotal = 0;
        for (int i = 0; i < 5; i++)
        {
            gTotal += total[i];
        }
    }
    void calculatePercentage()
    {
        percentage = gTotal / 5.0;
    }
    void calculateGrade()
    {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
    void display();
};
void Marksheet::display()
{
    cout << setw(35) << setfill('-') << "-" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "Seat No:" << setw(20) << right << sno << endl;
    cout << setw(15) << left << "Student Name:" << setw(20) << right << sname << endl;
    cout << setw(15) << left << "Class:" << setw(20) << right << cname << endl;
    cout << setw(15) << left << "Subject" << setw(20) << right << "Total" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << setw(15) << left << subname[i] << setw(20) << right << total[i] << endl;
    }
    cout << setw(15) << left << "Grand Total:" << setw(20) << right << gTotal << endl;
    cout << setw(15) << left << "Percentage:" << setw(20) << right << fixed << setprecision(2) << percentage << "%" << endl;
    cout << setw(15) << left << "Grade:" << setw(20) << right << grade << endl;
    cout << setw(35) << setfill('-') << "-" << endl;
}

int main()
{
    Marksheet m1;
    m1.getData();
    m1.display();

    return 0;
}