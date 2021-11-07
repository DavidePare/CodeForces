/**A-141-AmusingJoke*/
#include <bits/stdc++.h>

using namespace std;

bool key_compare (map<char,int> &lhs,map<char,int> &rhs) {
    return lhs.size() == rhs.size()
        && std::equal(lhs.begin(), lhs.end(), rhs.begin(), 
                      [] (auto a, auto b) { return a.first == b.first; });
}


int main(){
	string a,b,c;
	int i;
	map<char,int> in,res;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a.length()+b.length()!= c.length()){
		cout<<"NO";
		exit(0);
	}
	for(i=0;i<a.length();i++){
		if(in.count(a[i])>0)
			in[a[i]] =in.find(a[i])->second+1;
		else in[a[i]]=1;
	}
	for(i=0;i<b.length();i++){
		if(in.count(b[i])>0)
			in[b[i]] =in.find(b[i])->second+1;
		else in[b[i]]=1;
	}
	
	for(i=0;i<c.length();i++){
		if(in.find(c[i])->second>0)
			in[c[i]] =in.find(c[i])->second-1;
		else{
			cout<<"NO";
			exit(0);
		}
	}

	cout<<"YES";
}
