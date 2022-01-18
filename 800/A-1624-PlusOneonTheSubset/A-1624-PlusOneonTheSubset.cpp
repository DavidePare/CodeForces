#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main() {
    int x,t,app;
    cin>>t;
    while(t--){
        int max=INT_MIN,min=INT_MAX;
        cin>>x;
        while(x--){
            cin>>app;
            if(app> max) max=app;
            if(app< min) min=app;
        }
        cout<<max-min<<"\n";
    }
}
