#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int arr[1000],n,sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
cout<<sum<<endl;

}
return 0;
}


