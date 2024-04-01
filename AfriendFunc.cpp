#include <iostream>
using namespace std;

class IntArray
{
    int *arr;
    int size;

public:
    void getData()
    {
        cout << "Enter Integer array" << endl;
        cout << "Enter size of Integer array: ";
        cin >> size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter: " << i + 1;
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Integer array" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ,";
        }
    }
    friend void IntAvg(IntArray &);
};

void IntAvg(IntArray &a)
{
    double avg = 0.0, x = 0.0;
    for (int i = 0; i < a.size; i++)
    {
        x += a.arr[i];
    }
    avg = x / a.size;
    cout << "Average of integer array: " << avg << endl;
}

class FloatArray
{
    int size;
    float *arr;

public:
    void getData()
    {
        cout << "Enter float array" << endl;
        cout << "Enter size of float array: ";
        cin >> size;
        arr = new float[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter: " << i + 1;
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Float array" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ,";
        }
    }
    friend void FloatAvg(FloatArray &);
};

void FloatAvg(FloatArray &b)
{
    double avg = 0.0, x = 0.0;
    for (int i = 0; i < b.size; i++)
    {
        x += b.arr[i];
    }
    avg = x / b.size;
    cout << "Average of float array: " << avg << endl;
}

int main()
{
    IntArray a;
    FloatArray b;

    a.getData();
    a.display();
    cout << "\n";
    b.getData();
    b.display();

    cout << "Averages" << endl;
    IntAvg(a);
    FloatAvg(b);

    return 0;
}