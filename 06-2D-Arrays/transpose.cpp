// TRANSPOSE OF A SQUARE MATRIX OF ORDER N
#include <iostream>
using namespace std;
int main()
{
    // TAKING INPUT ARRAY
    int n;
    cin >> n;
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp=array[i][j];
            array[i][j] = array[j][i];
            array[j][i]=temp;
        }
    }
    // OUTPUT ARRAY
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }
}