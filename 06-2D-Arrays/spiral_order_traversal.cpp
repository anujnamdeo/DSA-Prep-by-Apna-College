#include <iostream>
using namespace std;
int main()
{
    // TAKING INPUT ARRAY
    int m, n;
    cin >> m >> n;
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    // SOLUTION: APPROACH IS RIGHT, ANSWER IS WRONG, BUT CAN BE CORRECTED. VERY GOOD ANUJ
    int row_start = 0;
    int column_start = 0;
    int row_end = n-1;
    int column_end = m-1;

    while (row_start <= row_end)
    {
        for (int i = row_start; i <= row_end; i++)
        {
            cout << array[row_start][i] << endl;
        }
        column_start++;
        for (int i = column_start; i <= column_end; i++)
        {
            cout << array[i][row_end]<< endl;
        }
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            cout << array[row_end][i]<< endl;
        }
        column_end--;
        for (int i = column_end; i >= column_start; i--)
        {
            cout << array[i][row_start]<< endl;
        }
        row_start++;
    }
}