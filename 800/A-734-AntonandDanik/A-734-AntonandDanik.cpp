#include<bits/stdc++.h>

using namespace std;
int main(){
	int x,a=0,b=0;
	string s;
	cin>>x;
	cin>>s;
	while(x--){
		if(s[x]=='D') a++;
		else b++;
	}
	if(a==b) cout<<"Friendship";
	else if(a>b) cout<<"Danik";
		else cout<<"Anton";
	
}
