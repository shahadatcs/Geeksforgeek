#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
    int a,b,addition,subtraction,division,multiplication;
    cin>>a >> b;
    if(a>b){
     addition=a+b;
     subtraction=a-b;
     division=a/b;
     multiplication=a*b;
     cout<<addition<<"\n"<<subtraction<<"\n"<<division<<"\n"<<multiplication<<endl;
    }
    else{
      addition=b+a;
      subtraction=b-a;
      division=b/a;
      multiplication=b*a;
      cout<<addition<<"\n"<<subtraction<<"\n"<<division<<"\n"<<multiplication<<endl;
    }

	}
	return 0;
}

