#include<iostream>
#include<cstring>
using namespace std;
int main(){
int t;

cin>>t;
while(t--)
{
    char a[1000];
    int n;
    n=strlen(a);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        c++;
        if(a[i]>=65 && a[i]<=90)
        c++;
    }
    cout<<c<<endl;
}
return 0;
}
