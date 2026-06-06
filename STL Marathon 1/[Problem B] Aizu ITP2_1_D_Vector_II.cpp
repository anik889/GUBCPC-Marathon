//Problem Link - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<vector<long long int>>a(n);
    for(int i=0;i<q;i++){
        int p,t,x;
        cin>>p;
        if(p==0){
            cin>>t>>x;
            a[t].push_back(x);
        }
        else if(p==1){
            cin>>t;
            for(int i=0;i<a[t].size();i++){
                if(i>0)     cout<<' ';
                cout<<a[t][i];
            }
            cout<<endl;
        }
        else if(p==2){
            cin>>t;
            if(!a[t].empty())   a[t].clear();
        }
    }
}
int main(){
    int t=1;
    for(int i=0;i<t;i++)        solve();
}
