#include<iostream>
using namespace std;
int main()
{
    int tc,n,r,c;
    long long int ans;
    cin>>tc;
    while(tc--)
    {
    cin>>n>>r;
      c=n-r+1;
      ans=1;
       while(c<=n)
      {
        ans=ans*c;
        c++;
      }
     cout<<ans<<endl;
    }
    return 0;
}
