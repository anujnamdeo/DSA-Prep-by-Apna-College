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
    int cum_sum[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
        cum_sum[i] = sum;
    }

    // PRINTING OUTPUT
    for (int i = 0; i < n; i++)
    {
        cout << cum_sum[i] << " ";
    }
}