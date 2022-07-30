#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n;
  int a[1000];
   cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  sort(a,a+n);
  int p=(n-1)/2;
  cout<<a[p]<<endl;
}
return 0;
}

