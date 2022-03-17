#include <iostream>
using namespace std;
int main()
{
    // TAKING INPUT TWO ARRAYS
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int array1[n1][n2];
    int array2[n2][n3];
    int answer[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> array1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> array2[i][j];
        }
    }
    //INTIALISING ANSWER ARRAY ELEMENTS ALL TO 0 TO AVOID GARBAGE VALUES   
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            answer[i][j]=0;
        }
    }
    // SOLUTION
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                answer[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    // PRINTING OUTPUT ARRAY
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << answer[i][j]<<" ";
        }
        cout<<endl;
    }
}