#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	if (num%2!=0){
		cout<< 0<<endl;
	}
	else{
	int ans = num/2 - 1;
	int final = ans/2;
	cout<< final<<endl;
}
}