// Question Statement:
// Given an array a[] of size n. Output sum of every possible subarray of this array
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
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum = sum  + array[j];
            cout<<sum<<", ";
        }
    }
}