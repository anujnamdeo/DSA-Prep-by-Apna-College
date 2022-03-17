#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b, int c)
{
    int largest = a;
    if (largest <= b)
        largest = b;
    if (largest <= c)
        largest = c;
    return largest;
}
int main()
{
    int x, y, z;
    int lhs, rhs;
    cin >> x >> y >> z;
    int a = max(x, y, z);
    //HO jyga
}