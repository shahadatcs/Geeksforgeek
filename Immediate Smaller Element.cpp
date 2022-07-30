#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
  for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-11]) {cout<<a[i]<<" ";}

        else     {  cout<<-1<<" ";}
    }
    cout<<-1<<endl;
    }
	return 0;
}



