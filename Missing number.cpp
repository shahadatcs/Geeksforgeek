#include<iostream>
using namespace std;
int main()
{
  int t,va;
  cin>>t;
  while(t--)
  {
     long long int a[10000],n;
     int sum=0;
     cin>>n;
     for(int i=0;i<n-1;i++)
     {
         cin>>a[i];
         sum=sum+a[i];
     }
     va=(n*(n+1))/2-sum;
     cout<<va<<endl;
  }
  return 0;
}
