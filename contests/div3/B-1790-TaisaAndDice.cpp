#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(vector<int> x){


}


int main() {
    int t,x,a,q;
    cin>>t;
    while(t--){
        int n,s,r,cont=0;
        cin>>n>>s>>r;
        int maxV=s-r;
        vector<int> x;
        x.pb(maxV);
        int num=r/(n-1);
        int p=r%(n-1);
        for(int i=0; i<n-1; i++ ){
            if(p>=1){
                p--;
                x.pb(num+1);
            }else{
                x.pb(num);
            }
        }
        /*if(r%(n-1)>=1){
            x.pb(num);
        }*/
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }

} 
