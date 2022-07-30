
#include<iostream>

using namespace std;

void recursion(int a,int n)
{
    if(a<=n)
    {
        cout<<a<<" ";
        recursion(a+1,n);
    }
}
int main()
 {
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    recursion(1,n);
	    cout<<endl;

	}
	return 0;
}
