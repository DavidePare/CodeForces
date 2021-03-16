#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main(){
	string s,word;
	unsigned i;
	vector<int> arr;
	cin>>s;
	for(i=0;i<s.length();i++){
		if(s[i]=='+') s[i]=' ';
	}
	
	istringstream ss(s);
	while (ss >> word)  
    { 
        arr.push_back(stoi(word));
    } 
    sort(arr.begin(), arr.end());
	//sort(arr.begin(), arr.end(), arr);
	//for (std::vector<int>::const_iterator x = arr.begin(); x != arr.end(); ++x){
	//	std::cout << *x << '+';
	//}
	for( i=0; i<arr.size()-1 ; i++)
		cout <<arr[i] <<"+";
	cout<<arr[arr.size()-1];
}
