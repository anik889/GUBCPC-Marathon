//Problem Link - https://vjudge.net/problem/EOlymp-3966
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    unordered_set<int>a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.insert(k);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(a.count(x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
