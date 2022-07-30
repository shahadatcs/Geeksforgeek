#include <iostream>
#include<algorithm>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a[1000],b[1000],n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    cout<<sum<<endl;
    }
	return 0;
}

