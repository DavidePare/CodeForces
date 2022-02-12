#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(vector<int> x){


}

int main() {
	int s,n,cont=0,sum=0;
	vector<int> choc;
	cin>>n;
	cin>>s;
	while(n--){
		int a;
		cin>>a;
		choc.pb(a);
	}
	sort(choc.begin(),choc.end());
	for(int i=0; i< choc.size(); i++){
		if(sum+choc[i] <= s){
			sum+=choc[i];
			cont++;
		}else break;
	}
	cout<<cont;


}