//A-474-GeorgeandAccommodation 
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,p,q,cont=0;
	cin>>t;
	while(t--){
		cin>>p>>q;
		if(q-p>=2) cont++;
	}
	cout<<cont;
	
}
