#include <iostream>
using namespace std;
int main()
{
    int count=1;
    int row=5, column=(row*2)-1;
    int mid=column/2;
    for(int i=0;i<row;i++)
    {
        for(int j=mid;j<column;j+=(column-mid))
        {
            cout<<"*";
            mid--;
        }
        cout<<endl;
    }
}