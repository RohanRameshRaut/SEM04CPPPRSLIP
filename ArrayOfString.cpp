#include <iostream>
using namespace std;

class String
{
    string *s1;
    int size;

public:
    String(){};
    void getData()
    {
        cout << "Enter the size: ";
        cin >> size;
        s1 = new string[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter string " << i + 1 << " :";
            cin >> s1[i];
        }
    }
    void display()
    {
        cout << "String is" << endl;
        for (int i = 0; i < size; i++)
        {
            cout<<s1[i]<<endl;
        }
    }
};
int main()
{
    String s1;
    s1.getData();
    s1.display();
    
    return 0;
}
