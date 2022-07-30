#include<iostream>
using namespace std;
int main()
{
  int T,a,b,c,max;
  cin>>T;
  while(T--)
  {
  cin>>a>>b>>c;
   if(a>b)
   {
     if(a>c)
        max=a;
     else
        max=c;
   }
   else
   {
       if(b>c)
       max=b;
   else
      max=c;

   }

  cout<<max<<endl;

  }
  return 0;
}



