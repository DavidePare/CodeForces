#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,i=0;
	cin>>t;
	string res="";
	string a="I love ";
	string b="I hate ";
	while(i<t){
		if(i%2==0) res+=" "+b+"that";
		else res+=" "+a+ "that";
		i++;
	}
	res=res.substr(1, res.size()-6);
	res+=" it";
	cout<<res;
}
