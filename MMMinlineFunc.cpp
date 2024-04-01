#include <iostream>
#include <algorithm>
using namespace std;

inline double mean(int a[], int n)
{
    double m = 0.0;
    double x = 0.0;
    for (int i = 0; i < n; i++)
    {
        x = x + a[i];
    }
    cout << x << endl;
    m = x / n;
    return m;
}
inline double median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 == 0)
    {
        return (a[n / 2] + a[(n / 2) - 1]) / 2.0;
    }
    else
    {
        return a[(n - 1) / 2]; // as counting of an array start from 0 so, its n-1.
    }
}
inline int mode(int a[], int n)
{
    int maxCout = 0, modeValue = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                ++count;
            }
        }
        if (count > maxCout)
        {
            maxCout = count;
            modeValue = a[i];
        }

        return modeValue;
    }
}

int main()
{
    int arr[50];
    int size;
    double mn, md, mod;
    cout << "Enter size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " : " << endl;
        cin >> arr[i];
    }
    mn = mean(arr, size);
    cout << "mean: " << mn << endl;
    md = median(arr, size);
    cout << "median: " << md << endl;
    mod = mode(arr, size);
    cout << "mode: " << mod << endl;

    return 0;
}