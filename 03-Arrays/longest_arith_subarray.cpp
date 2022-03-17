// Question Statement:
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
    int answer=2;
    int prev_diff=array[1]-array[0];
    int j=2;
    int current_length=2;
    while(j<n)
    {
        if(prev_diff==array[j]-array[j-1])
        {
            current_length++;
        }
        else
        {
            prev_diff=array[j]-array[j-1];
            current_length=2;
        }
        answer=max(answer,current_length);
        j++;
    }
    cout<<answer<<endl;
}