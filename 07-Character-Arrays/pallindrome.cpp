#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count = 0;
    char name[20];
    cin>>n>>name;
    int c = ceil(n / 2);
    for (int i = 0; i < c; i++)
    {
        if (name[i] == name[(n - 1) - i])
            count++;    
    }
    if(count==c)
        cout<<"Pallindrome"<<endl;
    else
        cout<<"Not a Pallindrome"<<endl;
}