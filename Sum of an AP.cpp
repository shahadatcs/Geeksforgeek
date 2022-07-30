#include <iostream>
#include <cmath>
using namespace std;


int main()
{
     int a, d, n, i,tc,sum;
    cin>>tc;
     while(tc--)
     {
     sum=0;
     cin>>n>>a>>d;
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     cout<<sum<<endl;
     }
     return 0;
}
