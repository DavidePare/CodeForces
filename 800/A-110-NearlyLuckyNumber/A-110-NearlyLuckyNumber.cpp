#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	int i,cont=0;
	size_t n=s.length();
	for(i=0;i<n; i++){
		if(s[i]=='4' || s[i]=='7'){ 
			cont++;
		}
	}
	if(((cont-7)==0 || (cont-4)==0) && cont!=0) cout<<"YES";
	else cout<<"NO";
	
}
