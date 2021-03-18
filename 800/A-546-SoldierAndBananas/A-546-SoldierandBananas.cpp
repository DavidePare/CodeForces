#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,w,sum=0;
	cin>>w>>k>>n;
	for(int i=1; i<n+1;i++){
		sum+= w*i;
	}
	if(sum<k) cout<<0;
	else cout<<abs(sum-k);
		
	
}

	
