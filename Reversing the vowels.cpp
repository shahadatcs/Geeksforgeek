#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string aa,b;
cin>>aa;
int n=strlen(aa);
int i,j=0;
for(i=0;i<n;i++)
{
    if(aa[i]='a'||aa[i]='e'||aa[i]='i'||aa[i]='o'||aa[i]='u')
    b[j]=aa[i];
    j++;
}
for(i=0;i<n;i++)
{
    if(aa[i]='a'||aa[i]='e'||aa[i]='i'||aa[i]='o'||aa[i]='u')
    aa[i]=b[j-1];
    j--;
}
cout<<aa<<endl;
}
return 0;
}

