#include<bits/stdc++.h>
using namespace std;
int main(){
	//strettamente maggiore di 10
	
	int x,i=0;
	cin>>x;
	string s[x],str;
	while(x>i){
		cin>>s[i];
		i++;
	}	
	for(i=0;i<x;i++){
		if(s[i].length()<=10)
			cout<<s[i]<<"\n";
		else {
			str=s[i];
			cout<<str[0]<<str.length()-2<<str[str.length()-1]<<"\n";
		}
	}
	
}
