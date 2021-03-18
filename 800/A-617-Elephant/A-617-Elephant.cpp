#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,s,cont=0;
	cin>>x;
	
	/**
	 * Solution B more less 
	 * */
	if((x%5)!=0) {
		x=x-(x%5);
		cont++;
	}
	while(x>0){
		x=x-5;
		cont++;
	}
	cout<<cont;
	/**
	 *  Solution A
	 * */
	/*while(x>0){
		s=x;
		if(x==1) x=x-1;
		if(x==2) x=x-2;
		if(x==3) x=x-3;
		if(x==4) x=x-4;
		if(x>5 && s==x) x=x-5;
		cont++;
	}
	cout<<cont;*/

}
