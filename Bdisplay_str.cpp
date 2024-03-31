#include <iostream>
using namespace std;

void display_str(char *a)
{
    cout << a << endl;
}
void display_str(int n, char *a)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void display_str(int m, int n, char *a)
{
    for (int i = m; i <= n; i++)
    {
        cout << a[i];
    }
}

int main()
{
    int m, n;
    char a[50];
    cout << "Enter a string: ";
    cin >> a;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "\n";
    display_str(a);
    cout << "\n";
    display_str(n, a);
    cout << "\n";
    display_str(m, n, a);

    return 0;
}