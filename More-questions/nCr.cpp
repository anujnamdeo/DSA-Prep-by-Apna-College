#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=0;i<(n-1);i++)
    {
        fact=fact*(n-i);
    }
    return fact;
}
int main()
{
    int n,r;
    cin>>n>>r;
    if(n>=r)
    {
        int nCr=(factorial(n))/(factorial(r)*factorial(n-r));
        cout<<nCr;
    }
}