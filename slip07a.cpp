#include <iostream>
#include <fstream>
using namespace std;

class Replace
{
public:
    char str[50];
    int count=0;
    void getData()
    {
        cout << "Enter the string: ";
        cin>>str;
    }
    int replace(char ch1, char ch2 = '*')
    {
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (str[i] == ch1)
            {
                str[i] = ch2;
                count++;
            }
        }
        return count;
    }
    void display()
    {
        cout.write(str, strlen(str));
    }
};

int main()
{
    Replace r1;
    r1.getData();
    cout<<r1.replace('r')<<endl;
    r1.display();

    return 0;
}