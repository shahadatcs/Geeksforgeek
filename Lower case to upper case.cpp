#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
     string s;
     cin>>s;
     int l=s.length();
     for(int i=0;i<l;i++)
     {
       char p=toupper(s[i]);
       cout<<p;
     }
     cout<<endl;
    }
    return 0;
}

