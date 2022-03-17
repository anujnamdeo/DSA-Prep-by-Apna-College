#include <iostream>
#include <cmath>
using namespace std;

int O_to_D(int octal)
{
    int count = 0, decimal = 0;
    int n = octal;
    while (octal)
    {
        octal = octal / 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        int last_bit = n % 10;
        decimal = decimal + (pow(8, i) * last_bit);
        n = n / 10;
    }
    return decimal;
}
int main()
{
    int octal;
    cin >> octal;
    int decimal = O_to_D(octal);
    cout << decimal;
}