#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int a[1000],n;
  cin>>n;
  for(int i=0;i<n;i++)
      cin>>a[i];


  sort(a,a+n);
  cout<<a[n-2]<<endl;
}

return 0;
}
