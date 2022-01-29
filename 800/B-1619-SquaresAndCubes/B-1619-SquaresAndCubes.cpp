#include <bits/stdc++.h>

using namespace std;
void solve(int x){
    set<double> elements;
    double lim2= sqrt(x);

    for(int i=2;i<= lim2; i++){
        if(x>=pow(i,2)) elements.insert(pow(i,2));
        if(x>= pow(i,3)) elements.insert(pow(i,3));
    }
    if(x>0) cout<<elements.size()+1<<"\n"; // 1 is polymorf of all integer value
    else cout<<0<<"\n"; // if number is negative result value is 0 
}

int main() {
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        solve(x);
    }
}
