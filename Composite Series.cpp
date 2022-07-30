#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    for(int i=3; i<=n; i++){

        for(int j=2; j<i; j++)
            if(i%j==0)
        {
            cout<<i<<" ";
           // break;
        }
    }

   cout<<endl;
}
return 0;
}
