#include <iostream>
using namespace std;

int linear_search(int key, int arr[])
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (key == arr[i])
            return i;
    }
    
}
int main()
{
    int key = 3;
    int array[] = {1, 2, 3, 5, 7, 9, 8, 4, 6};
    int index=linear_search(key,array);
    cout<<"Key is present at index: "<<index<<endl;
}
