#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,d;
	long long int n,arr[20],i;
	cin>>t;
	while(t--){
	  cin>>d>>n;
      for(i=0; i<20; i++){
	        arr[i]=0;
	    }
	    i=0;
	    while(n){
	        arr[i] = n%d;
	        i++;
	        n = n/d;
	    }
	    int val;
	    for(int j=i-1; j>=0; j--){
	        if(arr[j]>=10){
	            val = arr[j]-10;
	            cout<<char(65+val);
	            continue;
	        }
	        cout<<arr[j];
	    }
	    cout<<endl;
	}
	return 0;
}
