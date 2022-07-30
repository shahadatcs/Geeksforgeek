#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,temp=0,r,sum,re,rem=0;
  cin>>n;
  while(n>0){

    r=n%10;
    temp=temp*10+r;
    n=n/10;
  }
  sum=temp+n;
  int p=sum;
  while(p>0){
    re=p%10;
    rem=rem*10+re;
    p=p/10;
  }
  if(rem==p) cout<<rem<<endl;
  else cout<<"-1"<<endl;
}

return 0;
}
