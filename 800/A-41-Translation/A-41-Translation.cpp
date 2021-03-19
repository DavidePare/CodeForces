#include<bits/stdc++.h>

using namespace std;
int main(){
	string s,s2;
	int flag=0;
	cin>>s>>s2;
	size_t i;
	for(i=0;i<s.length();i++){
		if(s[i]!=s2[s2.length()-i-1])  flag=1;
	}
	if(flag) cout<<"NO";
	else cout<<"YES";
	
}
