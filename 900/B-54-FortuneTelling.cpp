#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,a,total=0,i;
	cin>>t;
	vector<int> v;
	while(t--){
		cin>>a;
		v.push_back(a);
		total+=a;
	}
	if(total%2 != 0) cout<<total;
	else{
		sort(v.begin(),v.end());
		for(i=0;i<v.size();i++){
			if(v[i]%2!=0){
				total-=v[i];
				break;
			}
		}
		if(total%2 != 0) cout<<total;
		else cout<<0;
	}
}
