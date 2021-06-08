//C-59-Title
#include<bits/stdc++.h>

using namespace std;
// User defined sizeof macro 


char findNewChar(set<char> numbLetter){
	char i='a';;
	set<char> x= numbLetter;
	if(numbLetter.empty()) return 'a';
	for (auto it = x.begin(); it !=x.end(); ++it, i++){
        if(i!=*it){
			//cout<<"A"<<i;
			return i; 
		}
	}
	return *numbLetter.rbegin()+1;
}


int checkstring(string s){
	for(int i=0; i< s.length()/2;i++){
		if(s[i] != s[s.length()-i-1]) return 0;
	}
	return 1;
}

int main(){
	int x,i=0,n,mist=0;
	cin>>x;
	string s;
	cin>>s;
	char m='a';
	set<char> numbLetter;
	if(s.length()%2==0){
		n=s.length();
		for(i=0;i<s.length();i++){
			if(s[i]!= '?') numbLetter.insert(s[i]);
			else{
				if(s[n-i-1]=='?' && n/2>i)	mist++;
				
			}
		}
		
		if(!numbLetter.empty())
			m=*(numbLetter.begin());
		int newletter=x-numbLetter.size();
	//	cout<<"   "<<mist<<"    "<<newletter<<"    "<< numbLetter.size()<<"\n";
		if(newletter>mist) cout<<"IMPOSSIBLE";
		else{
			for(i=0;i<n;i++){
				if(s[i]=='?'){
					if(s[n-i-1]=='?'){
						if(newletter>0 || numbLetter.size()==26){
							char carattere=findNewChar(numbLetter);
							s[i]=carattere;
							s[n-i-1]=carattere;
							newletter--;
							numbLetter.insert(carattere);
						}else{
							s[i]=m;
							s[n-i-1]=m;
						}
					}else{
						s[i]=s[n-i-1];
					}
				}
			}
			if(newletter==0){
				if(checkstring(s))	cout<<s;
				else cout<<"IMPOSSIBLE";
			}
			else cout<<"IMPOSSIBLE";
		}
	}
	else if(s.length()==1 && x==1){
			if(s[0]=='?'){
				cout<<'a';
			 }
			else cout<<s;
		}
	else cout<<"IMPOSSIBLE";
}	
	
	
	/*if(s[i]=='?'){
				if(s[n-i]=='?'){
					s[n-i]='a';
					s[i]='a';
				}else{
					s[i]=s[n-i];
				}
			}*/

