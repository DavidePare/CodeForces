#include <bits/stdc++.h>
#include <map>
#define pb push_back
using namespace std;
void solve(vector<int> x){


}
int checkbefore(vector<int> a, vector<int> b){
    return 1; 
}

int mat[5001][5001];

int main() {
    int t,a,q;
    cin>>t;
    while(t--){
        vector< vector<int> > x; 
        cin>>a;
        for(int i=0; i<a;i++){
            vector<int> f;
            for(int j=0; j<a-1; j++){
                cin>>q;
                f.pb(q);
            }
            x.pb(f);
        }
        vector<int> res;
        map<int,int> checking;
        int occA=0,occB=0;
        int elA=-1,elB=-1; 
        for(int j=0; j<a;j++){
                if(elA==-1){ 
                    elA=x[j][0];
                    occA++;
                }
                if(elB==-1 && elA!=-1 && elA != x[j][0]){
                    elB=x[j][0]; 
                    occB++;
                }
                if(elA == x[j][0]) occA++;
                if(elB == x[j][0]) occB++;
        }
        if(occA > occB){
            res.pb(elA);
            res.pb(elB);
        }else {
            res.pb(elB);
            res.pb(elA);
        }
        for(int i=1; i<a-1; i++){
            for(int j=0; j<a;j++){
                if(count(res.begin(), res.end(), x[j][i]) == 0){
                    res.pb(x[j][i]);
                    break;
                }    
            }
        }
        for(int i=0; i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }

} 
