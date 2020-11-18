#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;

void solve(int B[],int n){
    vector<int> A(n,-1);
    int start = 100000;
    for(int i=0;i<n;i++){
        if(A[i] != -1)
            continue;
        else{
            B[i]--;
            if(A[B[i]] != -1){
                A[i] = A[B[i]];
            }
            else{
                A[i] = A[B[i]] = start;
                start--;
            }
        }
    }
    print(A);
}

int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n;
        cin>>n;
        int B[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        solve(B,n);
    }
	return 0;
}
