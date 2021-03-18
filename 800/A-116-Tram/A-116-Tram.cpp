#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,max=0,v=0;
	cin>>t;
	
	while(t--){
		cin>>a>>b;
		v=v+b-a;
		if(max<v) max=v;
	}
	
	
	cout<<max;
}
