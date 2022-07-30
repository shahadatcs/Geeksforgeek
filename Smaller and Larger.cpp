#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
  {
	    int n,x,g=0,s=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	    cin>>a[i];


	        if(a[i]<=x)
	        g++;
	        if(a[i]>=x)
	        s++;
	    }
	    cout<<g<<" "<<s<<endl;
	}

	return 0;
}
