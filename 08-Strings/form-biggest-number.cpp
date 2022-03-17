#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string str;
    cin >> str;

    //Method 1: Used Bubble sort
    // int swapped = 1; // This variable will keep track whether the swaping has been done in the last   iteration or not
    // while (swapped == 1)
    // {
    //     swapped = 0;
    //     for (int j = 0; j < (str.length() - 1); j++)
    //     {
    //         int a = str[j];
    //         int b = str[j + 1];
    //         if (a > b)
    //         {
    //             // SWAP
    //             int temp = str[j];
    //             str[j] = str[j + 1];
    //             str[j + 1] = temp;
    //             swapped = 1;
    //         }
    //     }
    // }

    //Method 2: Or use sort() function
    sort(str.begin(),str.end());


    reverse(str.begin(), str.end()); 
    cout << str << endl;
}