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
    int start = 0;
    int end = n - 1;
    while (start != end)
    {
        int min_index;
        int minn = array[start];
        //FINDING MINIMUM ELEMENT AND RETURNING ITS INDEX AT EVERY ITERATION
        for (int i = start; i < n; i++)
        {
            minn = min(minn, array[i]);
        }
        for (int j = start; j < n; j++)
        {
            if (minn == array[j])
            {
                min_index = j;
                break;
            }
        }
        //SWAP
        int temp = array[start];
        array[start] = array[min_index];
        array[min_index] = temp;

        start = start + 1;
    }
    //PRINTING SORTED ARRAY
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << " ";
    }
}