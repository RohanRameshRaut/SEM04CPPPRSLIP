#include <iostream>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
class Solution
{
public:
    int *arr;
    int size;
    void getData()
    {
        cout << "Enter the size: ";
        cin >> size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "\nData" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ", ";
        }
    }
    void result(int t)
    {
        cout << "\nResult" << endl;
        for (int i = 0; i < size; i++)
        {
            if ((arr[i] + arr[i+1]) == t)
            {
                cout << "[" << i << ", " << i+1 << "]" << endl;
            }
        }
    }
};

int main()
{
    int t;
    Solution s1;
    s1.getData();
    cout << "Enter target: ";
    cin >> t;
    s1.display();
    s1.result(t);

    return 0;
}