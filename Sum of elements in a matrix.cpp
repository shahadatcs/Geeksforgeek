#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
     int n,m,sum=0;
     cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
     }
     cout<<sum<<endl;
	}
	return 0;
}


