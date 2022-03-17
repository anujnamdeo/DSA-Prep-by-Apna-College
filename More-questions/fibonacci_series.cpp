#include <iostream>
#include <cmath>
using namespace std;
void fibonacci(int);
int main()
{
    fibonacci(10);
}
void fibonacci(int n)
{
    int term1 = 0;
    int term2 = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<term1<<endl;
        int next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }
}