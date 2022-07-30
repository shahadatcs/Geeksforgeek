#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
char str[200];
int n,i,cont=0;
cin>>str;
n=strlen(str);
for(i=0;i<n;i++)
{
    if(str[i]>=65 && str[i]<=90)
        cont++;
}
cout<<cont<<endl;
}
return 0;
}

