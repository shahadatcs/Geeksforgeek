#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int b,n,x;;
    cin>>n>>x;
    b=x;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        x=x^b;
    }
    cout<<x<<endl;
    }
return 0;
}

