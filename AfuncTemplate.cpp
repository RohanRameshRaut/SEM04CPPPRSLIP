#include <iostream>
using namespace std;

template <class T>
T square(T b)
{
    T a;
    a = b * b;
    return a;
}

template <class T>
T cube(T b)
{
    T a;
    a = b * b * b;
    return a;
}

int main()
{
    int num;
    float num1;
    double n;
    cout << "Enter a int number: ";
    cin >> num;
    cout << "Enter a float number: ";
    cin >> num1;
    cout << "Enter a double number: ";
    cin >> n;
    cout << "\n";
    cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Cube of " << num << " is: " << cube(num) << endl;
    cout << "\n";
    cout << "Square of " << num1 << " is: " << square(num1) << endl;
    cout << "Cube of " << num1 << " is: " << cube(num1) << endl;
    cout << "\n";
    cout << "Square of " << n << " is: " << square(n) << endl;
    cout << "Cube of " << n << " is: " << cube(n) << endl;

    return 0;
}