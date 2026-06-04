//Problem Link - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_A

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q;
    cin>>q;
    vector<int>a;
    for(int i=0;i<q;i++){
        int p,x,y;
        cin>>p;
        if(p==0){
            cin>>x;
            a.push_back(x);
        }
        else if(p==1){
            cin>>y;
            cout<<a[y]<<endl;
        }
        else if(p==2)       a.pop_back();
    }
}
int main(){
    int t=1;
    for(int i=0;i<t;i++)
        solve();

}
