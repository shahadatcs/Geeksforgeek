#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int i,j,n,temp=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<n;i++)
     {
         for(j=i;j<n-1;j++)
         {
             if(a[i]<a[j+1])
             {
                 temp=a[i];
                 a[i]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }
     for(i=0;i<n;i++)
     {
         cout<<a[i];
     }
     cout<<"\n";
}

return 0;
}
