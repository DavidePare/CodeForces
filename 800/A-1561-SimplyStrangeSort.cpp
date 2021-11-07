#include<bits/stdc++.h>

using namespace std;

void solve(){
	int x,a;
	cin>>x;
	vector<int> arr;
	while(x--){
		cin>>a;
		arr.push_back(a);
	}
	cout<<arr.size()<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}