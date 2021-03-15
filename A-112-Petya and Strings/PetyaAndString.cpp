#include<bits/stdc++.h>

using namespace std;
int main(){
	int i;
	string s1,s2;
	cin>>s1;
	int l= s1.length();
	cin>>s2;
	for(i=0;i<l;i++){
		
			s1[i]=toupper(s1[i]);
			s2[i]=toupper(s2[i]);
	}
	if(s1.compare(s2)==0) cout<<"0";
	else if (s1.compare(s2)>0) cout<<"1";
	else cout<<-1;
	
}
