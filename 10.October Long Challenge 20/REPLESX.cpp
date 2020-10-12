#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;

int solve(int arr[],int n,int x,int p,int k){
    if (arr[p] == x)
        return 0;
    int count = 0;
    if (k>p){
        if (arr[p] < x)
            return -1;
        while (arr[p]>x && p>=1){
            count++;
            p--;
        }
    }
    else if (k<p){
        if (arr[p]>x)
            return -1;
        while (arr[p]<x && p<=n){
            count++;
            p++;
        }
    }
    else{
        if (arr[p]>x){
            while (arr[p]>x && p>=1){
                count++;
                p--;
            }
        }
        else{
            while (arr[p] < x && p <= n){
                count++;
                p++;
            }
        }
    }
    return count;
}

int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,p,k;
        cin>>n>>x>>p>>k;
        
        int A[n], B[n + 5];
        for(int i= 0;i<n;i++)
            cin >> A[i];
            
        sort(A, A+n);
        for (int i=0;i<n;i++)
            B[i+1] = A[i];
            
        int ans = solve(B,n,x,p,k);
        cout<<ans<<endl;
    }
	return 0;
}