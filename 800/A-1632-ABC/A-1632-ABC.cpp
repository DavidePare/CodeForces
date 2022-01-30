#include <bits/stdc++.h>

using namespace std;
void solve(){
    int len;
    string s;
    cin>>len;
    cin>>s;
    if(len>2 || s=="00" || s=="11") cout<<"NO\n";
    else cout<<"YES\n"; 
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
