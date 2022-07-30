#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int l;
        cin>>s;
      l = s.length();
	    for(int i = 0 ; i < l ; i++)
	    {
	        if(isalpha(s[i])) continue;
	        else cout<<s[i]<<"";
	    }
	    cout<<endl;
    }
    return 0;
}
