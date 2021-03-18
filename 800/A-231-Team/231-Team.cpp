#include<bits/stdc++.h>
using namespace std;
int main(){
	//strettamente maggiore di 10
	
	int x,i=0,a,b,c,cont=0;
	cin>>x;
	while(x>i){
		cin>>a>>b>>c;
		if( (a || b) && (b || c) && (a || c)) cont++; 
		i++;
	}
	cout<<cont;
	
}
