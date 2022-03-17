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
    // SOLUTION
    int key = 2;//VALUE TO BE SEARCHED
    int r = 0, c = n - 1;//INITIALISING 'SEARCH' POINTER TO THE TOP-RIGHT ELEMENT AND START SEARCH FROM THERE
    int search = array[r][c];
    while (r<n && c>=0)
    {
        if (key == search)
        {
            cout << "True " <<"At index "<<r<<", "<<c;
            exit(0);
        }
        else if (key < search)
        {
            c--;
            search = array[r][c];
        }
        else if(key>search)
        {
            r++;
            search = array[r][c];
        }
    }
}