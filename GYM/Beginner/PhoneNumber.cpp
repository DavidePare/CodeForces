#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(vector<int> x){


}

int main() {
	int t,x;
	string s,name;
	cin>>t;
	while(t--){
		int cont=0;
		cin>>name;
		cin>>s;
		for(char c :s) cont+=(int)(c-'48');
		if(cont%2 == 0) cout<<name<<endl;	
	}

}