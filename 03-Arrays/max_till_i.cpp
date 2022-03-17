//Question Statement:
//Given an array a[] of size n. For every 'i' from 0 to (n-1), output max(a[0],a[1],......,a[i])
#include <iostream>
using namespace std;
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
    for (int i = 0; i < n; i++)
    {
        int maxx = array[i];
        for (int j = 0; j <= i; j++)
        {
            maxx = max(maxx, array[j]);
        }
        cout << "Max till " << i << " is: " << maxx << endl;
    }
}