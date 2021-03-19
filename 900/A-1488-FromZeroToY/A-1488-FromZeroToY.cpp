/**
 * 900 points 
**/
#include<bits/stdc++.h>
using namespace std;

int multiply(int c,int d);
int main(){
	int t,a,b,powerN;
	cin>>t;
	while(t--){
		int cont=0;
		cin>>a>>b;
		while(b>=a){
			powerN=multiply(a,b);
			b=b-(a*pow(10,powerN));
			cont++;	
		}
		cout<<cont+b<<"\n";
		cont=0;
	}
	
}
int multiply(int c,int d){
	vector<int> v;
	int num=d;
	while (num>(10*c)){
        v.push_back(num % (10*c));
        num = num / (10*c);
    }
    return v.size();
	
}
