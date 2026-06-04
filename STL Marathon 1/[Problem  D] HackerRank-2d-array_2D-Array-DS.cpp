//Problem Link - https://www.hackerrank.com/contests/game-of-codes-at-snist/challenges/2d-array/problem
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>>ans(4,vector<int>(4,0));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum=0;
            for(int k=0;k<3;k+=2){
                for(int l=0;l<3;l++){
                    sum=sum+a[k+i][l+j];
                }
            }
            sum=sum+a[1+i][1+j];
            ans[i][j]=sum;
        }        
    }
    int maxed=-1e9;
    for(const auto&p:ans){
        for(const auto&q: p)        maxed=max(maxed,q);
    }
    cout<<maxed<<endl;
}
