#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  if(a==0) a=1;
    else   a=0;
  if(f==0) f=1;
  else f=0;

 int m=a*b | c*d | e*f;
 cout<<m<<"\n";
}

return 0;
}
