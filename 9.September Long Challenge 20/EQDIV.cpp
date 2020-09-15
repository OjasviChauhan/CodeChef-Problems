#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

typedef pair<int,int> pi;

void subsetSum(int arr[],int n,int sum){
    bool dp[n+1][sum+1];
    
    for(int j=0;j<=sum;j++){
        dp[0][j] = false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = true;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    int value=-1;
    for(int j=sum/2;j>=0;j--){
        if(dp[n][j]){
            value = j;
            break;
        }
    }
    
    int diff = sum - 2*value;
    int tar = (diff+sum)/2;
    
    vector<int> index;
    
    vector<pi> v;
    v.push_back({n,tar});
    
    while(v.size()>0){
        pi rem = v.back();
        v.pop_back();
        
        if(rem.first==0 && rem.second==0){
            break;
        }
        else{
            bool exc = dp[rem.first-1][rem.second];
            if(exc){
                v.push_back({rem.first-1,rem.second});
            }
            if(rem.second >= arr[rem.first-1]){
                bool inc = dp[rem.first-1][rem.second-arr[rem.first-1]];
                if(inc){
                    v.push_back({rem.first-1,rem.second-arr[rem.first-1]});
                    index.push_back(rem.first-1);
                }
            }
        }
    }
    
    int ans[n]={0};
    for(int i=index.size()-1;i>=0;i--)
        ans[index[i]]=1;
    
    cout<<diff<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    cout<<endl;
}
 
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin>>k;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            A[i] = pow((i+1),k);
        }
        
        int sum=0;
        if(k==1){
            sum = (n*(n+1))/2;
        }
        if(k==2){
            sum = (n*(n+1)*(2*n+1))/6;
        }
        if(k==3){
            sum = (pow(n,2)*pow(n+1,2))/2;
        }
        if(k==4){
            sum = (n*(n+1)*(2*n+1)*(3*pow(n,2) + 3*n - 1))/30;
        }
        
        subsetSum(A,n,sum);
    }
    return 0;
}