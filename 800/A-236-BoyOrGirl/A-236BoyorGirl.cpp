#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> c;
	string s;
	int i;
	cin>>s;
	for(i=0;i<s.length();i++){
		c.insert(s[i]);
	}
	if(c.size()%2 ==0)	cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}
