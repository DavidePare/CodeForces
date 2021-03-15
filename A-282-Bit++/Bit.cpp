#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,i=0,val=0;
	string s;
	cin>>x;
	while(i<x){
		cin>>s;
		if((s[0]=='-' && s[1]=='-') || (s[2]=='-' && s[1]=='-')) val--;
		if((s[0]=='+' && s[1]=='+') || (s[2]=='+' && s[1]=='+')) val++;
		i++;
	}

	cout<<val;
}
