#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    for (int i = 2; i <= sqrt(a); i++)
    {
        cout<<"Checking with "<<i<<endl;
        if ((a % i) == 0)
        {
            cout << "Not a Prime number" << endl;
            break;
        }
        else 
        {
            continue;
        }
    }
}