#include<iostream>
using namespace std;
int main()
{
   int L,B,H,TC;
   long long int SA,V;
   cin>>TC;
   while(TC--)
   {
       cin>>L>>B>>H;
       SA=2*(L*B+L*H+B*H);
       V=L*B*H;
       cout<<SA<<V<<endl;
   }
       return 0;
}
