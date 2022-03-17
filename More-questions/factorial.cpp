#include <iostream>
#include <cmath>
using namespace std;
void factorial(int);
int main()
{
    factorial(5);
}
void factorial(int n)
{
    int fact=1;
    for(int i=0;i<(n-1);i++)
    {
        fact=fact*(n-i);
    }
    cout<<fact;
}