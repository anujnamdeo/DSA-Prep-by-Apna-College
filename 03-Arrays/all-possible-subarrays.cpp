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
        for (int j = i; j < n; j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<array[k]<<" ";
            }
            cout<<endl;
        }
    }
}