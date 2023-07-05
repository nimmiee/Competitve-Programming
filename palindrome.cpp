#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	string srev;
	for ( int i = s.size()-1; i>=0; --i){
		srev = srev + s[i];
	}
    if ( s == srev){
		cout<<"YES"<<endl;

	}
    else {
		cout<<"NO"<<endl;
	}

}