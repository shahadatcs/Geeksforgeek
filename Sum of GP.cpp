#include<iostream>
#include<cmath>
int main()
{
    int a,r,n,tc;
    double ans;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>a>>r;
        if(r!=1)
        {
          ans=(a*pow(r,n)-a)/(r-1);
        }
        else
        {
          ans=a*n;
        }
       cout<<ans<<endl;
    }
    return 0;
}
