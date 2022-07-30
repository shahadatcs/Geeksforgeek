#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
        int n;
	   cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 {
	     cin>>arr[i];
	 }
	 int maxn=arr[0];
	 for(int i=0;i<n;i++)
    {
        if(arr[i]>maxn)
        {
            maxn=arr[i];
        }
    }
	cout<<maxn<<endl;
	}
	return 0;
}
