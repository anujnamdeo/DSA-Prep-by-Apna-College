// 5 bit binary numbers only
#include <iostream>
#include <cmath>
using namespace std;

int add(int b1, int b2)
{
    int prevcarry = 0;
    for (int i = 0; i < 5; i++)
    {
        int lsbb1, lsbb2;
        while (b1 > 0 && b2 > 0)
        {
            lsbb1 = b1 % 2;
            lsbb2 = b2 % 2;
            b1 = b1 / 10;
            b2 = b2 / 10;
            if ((lsbb1 == 0) && (lsbb2 == 0))
            {
                if (prevcarry == 0)
                    cout << 0;
                else if (prevcarry == 1)
                    cout << 1;
            }
            else if ((lsbb1 == 0 && lsbb2 == 1) || (lsbb1 == 1 && lsbb2 == 0))
            {
                if (prevcarry == 0)
                    cout << 1;
                else if (prevcarry == 1)
                {
                    cout << 0;
                    prevcarry = 1;
                }
            }
            else if (lsbb1 == 1 && lsbb2 == 1)
            {
                if (prevcarry == 0)
                {
                    cout << 0;
                    prevcarry == 1;
                }
                else if (prevcarry == 1)
                {
                    cout << 1;
                    prevcarry = 1;
                }
            }
        }
    }
}

int main()
{
    int b1, b2;
    cin >> b1 >> b2;
    int sum = add(b1, b2);
    cout << sum << endl;
}