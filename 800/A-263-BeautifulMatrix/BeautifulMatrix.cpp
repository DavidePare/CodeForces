#include<bits/stdc++.h>

using namespace std;
int main(){
	int i=0,x;
	while(i<25){
		cin>>x;
		if(x==1) break;
		i++;
	}
	cout<<abs(2-(i/5))+abs(2-(i%5));

}
