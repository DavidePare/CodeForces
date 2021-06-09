/** A-61-UltraFastMathematician */

#include <bits/stdc++.h>

using namespace std;

char XOR(char a, char b){
	return (a+b)%2 ;
}

int main(){
	string a,b,res;
	int i;
	cin>>a;
	cin>>b;
	for(i=0;i< a.length();i++){
		res.push_back(((a[i] -'0' )^ (b[i]-'0')) +'0');
	}
	cout<<res;
}
