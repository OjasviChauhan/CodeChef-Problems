#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;

void solve(int arr[],int i,int pending,int k,int count,int n){
    if(i == n){
        count += pending/k;
        cout<<count+1<<endl;
        return;
    }
    int total = arr[i] + pending;
    if(total < k){
        cout<<count+1<<endl;
        return;
    }
    int now = total - k;
    count++;
    solve(arr,i+1,now,k,count,n);
}

int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,0,0,k,0,n);
    }
	return 0;
}
