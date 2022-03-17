#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((j>0 && j<3)&&(i>0 && i<4))
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    
}