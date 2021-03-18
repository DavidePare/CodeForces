#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s;
	int a=0,b=0;
	cin>>s;
	size_t i=s.length();
	while(i--){
		if(isupper(s[i]))  a++;
		else b++;
	}
	
	
	if(a>b){
		transform(s.begin(), s.end(),s.begin(), ::toupper);
		cout<< s;
		
	}else{
		transform(s.begin(), s.end(),s.begin(), ::tolower);
		cout<< s;
	}
//	else cout<< tolower(s);
}
