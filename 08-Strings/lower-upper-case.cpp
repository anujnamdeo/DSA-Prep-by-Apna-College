#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// SOLUTION
string LowerCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int c = str[i];
        if (c >= 65 && c <= 90)
        {
            c += 32;
            str[i] = c;
        }
    }
    return str;
}

string UpperCase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int c = str[i];
        if (c >= 97 && c <= 122)
        {
            c -= 32;
            str[i] = c;
        }
    }
    return str;
}

int main()
{
    // TAKING INPUT
    string str;
    cin >> str;
    // Using User Defined Functions
    string lower = LowerCase(str);
    string upper = UpperCase(str);

    // PRINTING OUTPUT
    cout << lower << endl
         << upper << endl;

    // Using Pre-defined function 'transform'
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
}
