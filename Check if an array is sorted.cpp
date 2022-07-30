#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int arr[1200],n;
//int ar[1200];
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ar=sort(arr,arr+n);
if(ar==arr) cout<<1<<endl;
else cout<<0<<endl;
}
return 0;
}
