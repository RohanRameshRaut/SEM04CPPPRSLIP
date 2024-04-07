#include <iostream>
using namespace std;

class Fraction
{
    int num;
    int deno;

public:
    Fraction()
    {
        num = 0;
        deno = 0;
    };
    Fraction(int a, int b)
    {
        num = a;
        deno = b;
    }
    void display()
    {
        cout << "numerator: " << num << endl;
        cout << "denominator: " << deno << endl;
        cout << "Fraction is: " << num << "/" << deno;
    }
    // Fraction operator+(Fraction &a)
    // {
    //     Fraction obj3;
    //     obj3.num = this->num + a.num;
    //     obj3.deno = this->deno + a.deno;

    //     return obj3;
    // }
    Fraction sum(Fraction &a)
    {
        Fraction obj3;
        obj3.num = this->num + a.num;
        obj3.deno = this->deno + a.deno;
        // cout<<"Sum: "<<obj3.num<<"/"<<obj3.deno<<endl;
        return obj3;
    }
};

int main()
{
    Fraction obj1(10, 20), obj2(20, 30), obj3;
    obj1.display();
    obj2.display();
    // obj3 = obj1 + obj2;
    cout << "\nAfter addition"<<endl;
    obj3 = obj1.sum(obj2);
    obj3.display();

    return 0;
}