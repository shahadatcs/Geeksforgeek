#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n sum=0;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){

    cin>>a[i][j];
 }

}
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){

    if(i==j)
            {
                sum+=a[i][j];
            }
            if((i+j)==(n-1))
            sum+=a[i][j];
 }

}
cout<<sum<<endl;
}
return 0;
}
