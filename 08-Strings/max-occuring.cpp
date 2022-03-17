#include <iostream>
// #include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string str; // string of small alphabets only
    cin >> str;
    char array[26];
    for (int i = 0; i < 26; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < str.length(); i++)
    {
        int a = str[i];
        array[a - 97]++;
    }

    int maxn;
    maxn = array[0];
    for (int j = 0; j < 26; j++)
    {
        if(maxn<array[j])
            maxn=array[j];
    }
    cout << maxn << endl;
}