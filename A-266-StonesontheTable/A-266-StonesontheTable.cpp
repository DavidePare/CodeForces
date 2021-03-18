#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	int a,i=0;
	cin>>a;
	string s;
	cin>>s;
	for(i=0;i<s.length();i++){
		if(s[i]==s[i+1]) {
			s.erase(remove(s.begin(), s.end(), i+1), s.end());
			count++;
		}
	}

	
	cout<<count;
}
