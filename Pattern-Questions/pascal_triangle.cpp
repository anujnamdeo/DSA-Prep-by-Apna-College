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

int nCr(int n, int r)
{
    if(n>=r)
    {
        int nCr=(factorial(n))/(factorial(r)*factorial(n-r));
        return nCr;
    }
}

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

}