#include <iostream>
using namespace std;

class Person
{
    char person_name[10], city[10];
    int mobile_number, age, no;

public:
    void getData()
    {
        cout << "Enter the person no: ";
        cin >> no;
        cout << "Enter the name: ";
        cin >> person_name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the mobile number: ";
        cin >> mobile_number;
        cout << "Enter the city: ";
        cin >> city;
    }
    void getData(char n[])
    {
        if (strcmp(n, person_name) == 0)
        {
            cout << "Person name: " << person_name << endl;
            cout << "Person mobile no: " << mobile_number << endl;
        }
    }
    void getData(int m)
    {
        if (m == mobile_number)
        {
            cout << "Person name: " << person_name << endl;
            cout << "Person mobile no: " << mobile_number << endl;
        }
    }
    void getData(char c[], int n)
    {
        if (strcmp(c, city) == 0)
        {
            cout << "Person no: " << no << endl;
            cout << "Person name: " << person_name << endl;
            cout << "Person age: " << age << endl;
            cout << "Person mobile no: " << mobile_number << endl;
            cout << "Person city: " << city << endl;
        }
    }
    void display()
    {
        cout << "Person no: " << no << endl;
        cout << "Person name: " << person_name << endl;
        cout << "Person age: " << age << endl;
        cout << "Person mobile no: " << mobile_number << endl;
        cout << "Person city: " << city << endl;
    }
};

int main()
{
    Person p[10];
    int ch, no, mno;
    char name[10], city[10];
    do
    {
        cout << "\n1.Enter the details of a person\n2.Serch the mobile number of given person\n3.Search the person name of given mobile number\n4.Search all person details of given city\n5.Display\n6.Exit\n"
             << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter no of persons: ";
            cin >> no;
            for (int i = 0; i < no; i++)
            {
                p[i].getData();
            }
            break;
        case 2:
            cout << "Enter the name of a person: ";
            cin >> name;
            for (int i = 0; i < no; i++)
            {
                p[i].getData(name);
            }
            break;
        case 3:
            cout << "Enter the mobile number: ";
            cin >> mno;
            for (int i = 0; i < no; i++)
            {
                p[i].getData(mno);
            }
            break;
        case 4:
            cout << "Enter the city: ";
            cin >> city;
            for (int i = 0; i < no; i++)
            {
                p[i].getData(city, i);
            }
            break;
        case 5:
            cout << "Total Persons detail" << endl;
            for (int i = 0; i < no; i++)
            {
                p[i].display();
            }
            break;
        case 6:
            exit(0);
        default:
            cout << "Wrong choice!" << endl;
        }
    } while (0 < ch < 7);

    return 0;
}