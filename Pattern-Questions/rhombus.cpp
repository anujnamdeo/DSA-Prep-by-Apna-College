#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout<<"Enter row and column"<<endl;
    cin>>row>>column;
    int mid=(column-2)/2;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if((i+j)<=mid)
                cout<<" ";
            else if((i+j)>=column)
                cout<<" ";
            else 
                cout<<"*";
        }
        cout<<endl;
    }
    
}