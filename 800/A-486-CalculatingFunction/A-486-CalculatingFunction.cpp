
/**A-486-CalculatingFunction*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t,i=0;
	cin>>t;
	long long res=0;
	if(t%2==0) res=t/2;
	else {
		long long x=abs(t)+1;
		res-=x/2;
	}
	cout<<res;
}
