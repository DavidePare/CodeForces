#include<bits/stdc++.h>

using namespace std;

int multiply(int x){
	int cont=1;
	while(x>9){
		x/=10;
		cont++;
	}
	return cont;
} 
bool flag(int x){
	int n=multiply(x);
	set<int> a;
	int i;
	for(i=0;i<n-1;i++){
		if(a.count(x/pow(10,n)) != 0){
			cout<<"entro";
			return true; //a.push_back(x/pow(10,n));
		  }
		a.insert(x/pow(10,n));
	}
	return false;
	
}
int main(){
	int x,n;
	cin>>x;
	vector<int> a;
	x++;
	int i=0;
	
	while(flag(x)){
		x++;
	/*	int value=x/pow(10,n);
		if(count(a.begin(),a.end(),value)==0){
			a.push_back(value);
			
			x-=value*pow(10,n);
			i++;
			cout<<x<<"\n";
		 }
		else {
			//n++;
			x=x+pow(10,n);
			cout<<"AAAAAA";
		}*/
	}
	if(flag(x)) cout<<"unfind";
	else cout<<x;

}
