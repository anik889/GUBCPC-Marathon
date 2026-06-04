//Problem Link - https://acm.hdu.edu.cn/showproblem.php?pid=1005
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    while(cin>>a>>b>>n &&a!=0 && b!=0 && n!=0){
        n=(n-2)%49;
        int x=1,y=1;
        for(int i=0;i<n;i++){
           int temp=((a*x)+(b*y))%7;
           y=x;x=temp;
        }cout<<x<<endl;
    }
}int main(){
    solve();
}
