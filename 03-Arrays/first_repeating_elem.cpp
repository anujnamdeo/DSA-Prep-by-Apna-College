// Question Statement:
// Given an array..
#include <iostream>
using namespace std;
int main()
{
    // TAKING ARRAY INPUT
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // SOLUTION
    int repeating[n],k=0;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                int repeat = array[i];
                count++;
            }
            if(count>=1)
            {
                repeating[k]=array[i];
                k++;
            }
        }
    }
    //PRINTING OUTPUT :)
    cout<<repeating[0]<<endl;
    
}