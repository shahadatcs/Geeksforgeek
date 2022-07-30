#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
        int x=n;
        int r,c=0,t=0;
        while(n!=0)
        {

            r=n%10;
            if (r==6)
            {
                r=5;
            }
            else if(r==5)
            {
                r=6;
            }
            t=pow(10,c)*(r)+t;
            c++;
            n=n/10;
        }

        cout<<x+t<<endl;
    }
	return 0;
}
