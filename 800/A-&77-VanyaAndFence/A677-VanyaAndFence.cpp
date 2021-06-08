#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,h,p;
	int cont=0;
	cin>>t;
	cin>>h;
	while(t--){
		cin>>p;
		if(p<= h) cont++;
		else cont=cont+2;
		
	}
	cout<<cont;
}
