#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
 int n,sum=0;
 int a[n];
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int j=0;j<n;j++)
 {
     sum+=a[j];
     cout<<sum/(j+1)<<"";
 }
  cout<<endl;
}
return 0;
}
