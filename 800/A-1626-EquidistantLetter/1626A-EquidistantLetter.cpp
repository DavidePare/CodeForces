#include <bits/stdc++.h>

using namespace std;
void solve(string x){
    sort(x.begin(),x.end());
    /*  if(x.size()>1) {
          for (int i = 0; i < x.size() - 2; i++) {
              if (x[i] == x[i + 1]) swap(x[i + 1], x[i + 2]);
          }
      }
    cout<<x<<"\n";
}
int main() {
    int x;
    vector<string> input;
    cin>>x;
    string a;
    while(x--){
        cin>>a;
        input.push_back(a);
    }
    for(int i=0; i<input.size();i++){
        solve(input[i]);
    }
    return 0;
}
