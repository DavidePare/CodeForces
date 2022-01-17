#include <bits/stdc++.h>

using namespace std;
void solve(string x) {
    string fin;
    int lvl=-1;
    if(x.length()>1) {
        for (int i = x.size()-2; i >=0 ; i--) {
            if(x[i] + x[i +1] - 48 - 48 > 9){
                lvl=i;
                break;
            }
        }
        if(lvl != -1){
            fin += x.substr(0, lvl);
            fin += to_string((int) (x[lvl] + x[lvl +1] - 48 - 48));
            fin += x.substr(lvl + 2, x.size() - lvl - 1);
        }else{
            fin += to_string(x[0]+x[1]-48-48);
            fin += x.substr(2, x.size() - 1);
        }
        cout << fin<< "\n";
    }else cout<<x<<"\n";
}
int main() {
    int x;
    vector<string> input;
    cin>>x;
    string a;
    while(x--){
        cin>>a;
        solve(a);
    }
    return 0;
}
