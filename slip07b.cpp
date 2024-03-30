#include <iostream>
using namespace std;

class Vector
{
    int size;
    int *ptr;

public:
    Vector()
    {
        size = 0;
        ptr = new int[size];
    }
    Vector(int n)
    {
        size = n;
        ptr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter vector element " << i + 1 << ":";
            cin >> ptr[i];
        }
    }
    void Union(Vector v1, Vector v2)
    {
        Vector v3;
        int j, k, i;
        size = v1.size + v2.size;
        ptr = new int[size];
        for (i = 0; i < v1.size; i++)
        {
            ptr[i] = v1.ptr[i];
        }
        for (k = i, j = 0; k < size, j < v2.size; j++, k++)
        {
            ptr[k] = v2.ptr[j];
        }
    }
    void display()
    {
        cout << "(";
        for (int i = 0; i < size - 1; i++)
        {
            cout << ptr[i] << ",";
        }
        cout << ptr[size - 1] << ")";
    }
};

int main()
{
    Vector v1(3), v2(2), v3;
    v3.Union(v1, v2);
    v3.display();

    return 0;
}