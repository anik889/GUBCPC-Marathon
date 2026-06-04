//Problem Link - https://judge.yosupo.jp/problem/double_ended_priority_queue
#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,q;
    cin>>n>>q;
    multiset<long long int>a;
    for(long long int i=0;i<n;i++){
        long long int t;
        cin>>t;
        a.insert(t);
    }
    for(long long int i=0;i<q;i++){
        long long int p,r;
        cin>>p;
        if(p==0){
            cin>>r;
            a.insert(r);
        }
        else if(p==1){
            cout<<*a.begin()<<"\n";
            a.erase(a.begin());
        }
        else if(p==2){
            cout<<*a.rbegin()<<"\n";
            a.erase(prev(a.end()));
        }
    }
}
