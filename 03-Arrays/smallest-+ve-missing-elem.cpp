// Question Statement:
// Given an array..
#include <iostream>
using namespace std;
int Linear_Search(int key, int arr[], int n)
{
    cout << "Searching: " << key << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            count++;
            cout << "Returning -1 for element: " << key << endl;
            return -1;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Returning: " << key << endl;
        return key;
    }
}
int main()
{
    // TAKING ARRAY INPUT
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION
    int missing[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        int find;
        int a = ++array[i];
        if (a > 0)
        {
            find = Linear_Search(a, array, n);
            cout << find << endl;
            if (find > 0)
            {
                cout << "Hi" << endl;
                missing[k] = find;
                cout << missing[k] << endl;
                k++;
            }
        }
    }
    int minn = missing[0];
    for (int j = 0; j < n; j++)
    {
        minn = min(minn, missing[j]);
    }
    cout << "The minimum +ve element missing is: " << minn << endl;
}