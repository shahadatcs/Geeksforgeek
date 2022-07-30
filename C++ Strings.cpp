#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    s3=s1+s2;
  if(s1.length()>s2.length())
   {
     cout<<s1.length()<<endl;
    cout<<s3<<endl;
   }
    else
    {
    cout<<s2.length()<<endl;
    cout<<s3<<endl;
    }

}
return 0;
}

