#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,p,d=0;
       cin>>n;
       while(n>0)
       {
           p=n%10;
           d=d*10+p;
           n=n/10;
       }
       cout<<d<<endl;
   }

    return 0;
}
