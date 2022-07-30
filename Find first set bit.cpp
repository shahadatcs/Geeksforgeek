#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {
    int n,rem,i=0;
    cin>>n;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        i++;
        if(rem==1) break;
    }
    cout<<i<<endl;
    }
	return 0;
}
