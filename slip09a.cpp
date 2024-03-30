#include <iostream>
using namespace std;

class Person
{
    char name[20];
    char add[30];
    double tax_amt = 0;
    int salary;

public:
    void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the add: ";
        cin >> add;
        cout << "Enter the salary: ";
        cin >> salary;
    }
    void taxCal()
    {
        if (salary <= 20000)
        {
            tax_amt = 0;
        }
        else if (salary > 20000 && salary <= 40000)
        {
            tax_amt = ((salary * 5) / 100);
        }
        else
        {
            tax_amt = ((salary * 10) / 100);
        }
    }
    void display()
    {
        cout << "\nPerson details" << endl;
        cout << "----------------------------\n";
        cout << "name\tadd\tsalary\t Tax" << endl;
        cout << name << "\t" << add << "\t" << salary << "\t" << tax_amt << endl;
    }
};

int main()
{
    Person p1;
    p1.getData();
    p1.taxCal();
    p1.display();

    return 0;
}