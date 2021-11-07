/**A-1538-StoneGames */
#include <bits/stdc++.h>

using namespace std;
int main(){
	int t,c,value,i,cont,a,b;
	vector<int> x;
	cin>>t;
	while(t--){
		cont=0;
		cin>>c;
		while(c--){
			cin>>value;
			x.push_back(value);
		}
		int maxIndex=max_element(x.begin(),x.end())-x.begin();
		int minIndex=min_element(x.begin(),x.end())-x.begin();
		
		int len=x.size();
		if(maxIndex > minIndex){
	
		}
		
		cout<<"Uno"<<maxIndex<<" "<<minIndex;
	}
	
}
