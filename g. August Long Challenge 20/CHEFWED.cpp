#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

int dp[1001][1001] = {0};

int cal(int s,int e,int f[],int k){
    if(s==e){
        return k;
    }
    int fam[101] = {0};
    int ans = k;
    for(int i=s;i<=e;i++){
       fam[f[i]]++;
    }
    for(int i=0;i<=100;i++){
        if(fam[i]>1){
            ans+=fam[i];
        }
    }
    return ans;
}

int fun(int s,int e,int f[],int k){
    if(s>e){
        return 0;
    }
    if(s==e){
        return k;
    }
    if(dp[s][e]!=0){
        return dp[s][e];
    }
    int final_ans = INT_MAX;
    
    for(int i=s;i<=e;i++){
        final_ans = min(final_ans,cal(s,i,f,k) + fun(i+1,e,f,k));
    }
    
    dp[s][e] = final_ans;
    return dp[s][e];
}

int32_t main() {
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       int f[n];
       int ans = k;
       int fam[101] = {0};
       
       for(int i=0;i<1001;i++){
           for(int j=0;j<1001;j++){
               dp[i][j] = 0;
           }
       }
       
       for(int i=0;i<n;i++){
           cin>>f[i];
       }
       
       cout<<fun(0,n-1,f,k)<<endl;
       
    }
  return 0;
}
