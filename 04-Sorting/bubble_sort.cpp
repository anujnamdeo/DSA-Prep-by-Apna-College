#include <iostream>
using namespace std;

int main()
{
    //TAKING ARRAY AND ITS SIZE AS INPUT
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int swapped = 1;//This variable will keep track whether the swaping has been done in the last   iteration or not
    while(swapped == 1)
    {
        swapped=0;
        for (int j = 0; j < (n-1); j++)
        {
            if (array[j] > array[j + 1])
            {
                // SWAP
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }      
        }
    }
    //PRINTING SORTED ARRAY
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
    }
}