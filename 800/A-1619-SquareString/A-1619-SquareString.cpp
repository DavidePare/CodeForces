#include <iostream>

using namespace std;
void solve(string s){
    int mid=s.length()/2;
    int flag=0;
    for(int i=0;i<s.length()/2; i++){
        if(s[i] != s[i+mid]){
            cout<<"NO\n";
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"YES\n";
}
int main() {
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s.length() %2 ==0 ) solve(s);
        else cout<<"NO\n";
    }
    return 0;
}
