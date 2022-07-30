#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
     int n;
     cin>>n;
     int p=sqrt(n);
     cout<<p;
     if((p*p)==n) cout<<"1"<<endl;
     else cout<<"0"<<endl;
    }
	return 0;
}



