#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string num;
	    int base,number=0;
	    cin>>base>>num;
	    for(int i = num.size(); i-- > 0;)
	    {
	        int val = 0;
	        if(num[i] > 64 and num[i] < 91)
                val = num[i] - 55;
            else val = num[i] - '0';

            // cout<<val*pow(base,num.size() - i - 1)<<endl;
            number += val*pow(base,num.size() - i - 1);
	    }
	    cout<<number<<endl;
	}
	return 0;
}
