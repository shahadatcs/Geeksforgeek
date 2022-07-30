#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  string m;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    if(s.length()>m.length())
        m=s;
  }
   cout<<m<<endl;
}

return 0;
}
