#include <iostream>
using namespace std;

int Binary_Search(int key, int arr[], int n)
{ // start, end and mid all represents indices of array
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            end = mid;
        else if (key > arr[mid])
            start = mid;
    }
    return mid;
}

int main()
{
    int key = 8;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sorted array
    int n = 11;
    int search = Binary_Search(key, array, n); // index returned
    cout << key << " is present at index " << search;
}