#include<iostream>
using namespace std;
int main()
 {
	int T;
	cin >> T;
	while(T--){
	    string str1;
	    string str2;
	    cin >> str1 >> str2;
	    if(str2.rfind(str1) == -1)
	        cout << "-1" << endl;
	    else
	        cout << str2.rfind(str1) + 1  << endl;
	}
	return 0;
}
