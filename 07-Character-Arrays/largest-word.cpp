// GIVEN A SENTENCE, FIND THE LARGEST WORD I.E. WORD WITH GREATEST NO. OF LETTERS
#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    int max = 0;
    int count = 0;
    int i = 0;
     
    while (name[i] != '\0')
    {
        if (name[i]==' ')//ASCII FOR A BLANK SPACE IS 32
        {
            count++;
        }
        else 
        {
            count = 0;
        }
        if (max <= count)
        {
            cout<<"max updated"<<endl;
            max = count;  
        }
        i++;
        cout<<"i incremented"<<endl;
    }
    cout << max << endl;
}