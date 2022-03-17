#include <iostream>
using namespace std;

int main()
{
    // TAKING ARRAY AND ITS SIZE AS INPUT
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    //INSERTION SORT
    int j = 2;
    for (j = 2; j < n+1; j++)
    {
        int i = j - 1;
        int key = array[j - 1];
        while (i > 0 && array[i - 1] > key)
        {
            array[i] = array[i - 1];
            i--;
        }
        array[i] = key;
    }
    // PRINTING SORTED ARRAY
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
    }
}