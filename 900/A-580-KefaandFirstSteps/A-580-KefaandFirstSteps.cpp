/**
 * 900 points Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.
**/
#include<bits/stdc++.h>

using namespace std;
int main(){
	int x,a,i,cont=0,max=0;
	vector<int> v;
	cin>>x;
	while(x--){
		cin>>a;
		v.push_back(a);
	}
	for(i=1;i<(v.end()-v.begin());i++){
		if(v[i]>=v[i-1]) cont++;
		else{
			if(cont>max) max=cont;
			cont=0;
		}
	}
	if(max<cont)  max=cont;
	cout<<max+1;

}
