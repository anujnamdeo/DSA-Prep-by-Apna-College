// Question Statement:
// Given an array..
#include <iostream>
using namespace std;
int main()
{
    // TAKING ARRAY INPUT
    int n, s;
    cin >> n >> s;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION 1: Time= O(n^2)
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + array[j];
            if (sum == s)
            {
                cout << i << " " << j << endl;
                exit(0);
            }
        }
    }
    // SOLUTION 2: Time: O(n)
    int start = 0;
    int end = 0;
    while(start < n)
    {
        if (s == (array[start] + array[end]))
        {
            cout << start << " " << end << endl;
            exit(0);
        }
        start++;
        end++;
    }
}