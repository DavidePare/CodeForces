#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(vector<int> x){


}

int mini(int a,int b){
  if(a>=b) return b;
  return a;
}

int main() {
 	string pi="3141592653589793238462643383279502884";
    int t,x,a,q;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int j=0;
        for(int i=0; i<s.size();i++){
            if(s[i]==pi[i]){
                j++;    
            }else break;
        }
        cout<<j<<endl;
    }
} 
