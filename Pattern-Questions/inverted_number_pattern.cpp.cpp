#include<iostream>
using namespace std;
int main()
{
    int count=1;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<(5-i);j++)
       {
           cout<<count;
           count++;
       }
       count=1;
       cout<<endl;
   }
}