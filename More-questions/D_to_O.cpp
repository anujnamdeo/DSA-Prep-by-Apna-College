#include <iostream>
#include <cmath>
using namespace std;

int D_to_O(int decimal)
{
    int octal=0,i=0;
    while(decimal>0)
    {
        int bit=decimal%8;
        decimal=decimal/8;
        octal=octal+(bit*pow(10,i));
        i++;
    }
    return octal;
}

int main()
{
    int decimal;
    cin >> decimal;
    int octal=D_to_O(decimal);
    cout<<octal;
}