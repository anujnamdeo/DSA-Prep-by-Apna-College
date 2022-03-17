#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Specify the size of array"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int maxn, minn;
    maxn=array[0];
    minn=array[0];
    for(int j=0;j<n;j++)
    {
    // Approach 1:
        // if(max<array[j])
        //     max=array[j];
        // if(min>array[j])
        //     min=array[j];

     // Approach 2: (Using built in function max() and min())
        maxn=max(maxn, array[j]);
        minn=min(minn, array[j]);
    }
    cout<<"Max element is: "<<maxn<<endl;
    cout<<"Min element is: "<<minn<<endl;

}