#include <iostream>
using namespace std;

class Number
{

public:
    static int cnt;
    void Display()
    {
        cnt++;
        cout << "The value of count is: " << cnt<<endl;
    }
};
int Number:: cnt =0; // static is a class variable


int main()
{
    Number n1, n2, n3;
    n1.Display();
    n2.Display();
    n3.Display();
    n1.Display();
    return 0;
}