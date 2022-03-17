#include<iostream>
#include<cmath>
using namespace std;

int Binary_to_Decimal(int n)
{
    int no_of_bits;
    while()
    {
        
    }
    int decimal;
    for(int i=0;i<no_of_bits;i++)
    {
        int last_bit=n%10;
        decimal=decimal+(pow(2,i)*last_bit);
        n=n/10;
    }
}

int main()
{
    int binary;
    cin>>binary;
    int decimal=Binary_to_Decimal(binary);
    cout<<decimal;
    
}