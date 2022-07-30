#include<iostream>
using namespace std;
int main()
{
    int T,n,i;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i=1;i<=10;i++)
        {
           cout<<i*n<<" ";
        }
        cout<<endl;
    }
    return 0;
}
