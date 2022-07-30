#include <iostream>
using namespace std;
int main() {

    int T=0,n=0,i,present,original,missing,j;int a[10000];
    cin>>T;
    for(i=0;i<T;i++)
    {
    cin>>n;
    for(j=0;j<n-1;j++)
    {
       cin>>a[j];
    }
    present=0;
    original=0;
    missing=0;

    for(j=0;j<n-1;j++)
    {
    present=present+a[j];

    }
    original=(n*(n+1))/2;
    missing=original-present;
   cout<<missing<<endl;
    }
    return 0;

}
