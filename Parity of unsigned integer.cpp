#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
  int a,co=0;
  cin>>a;
  while(a>0){

    if(a%2==1)
    {
        co++;
        a=a/2;
    }
  }
   co%2==0?cout<<"even\n":cout<<"odd\n";
}


return 0;
}
