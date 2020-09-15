#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod1=1000000007;

int power(int a, int n){
	if(n == 0)	return 1;
	if(n == 1)	return a%mod1;
	if(n&1)	return (a*(power(a,n-1)%mod1))%mod1;
	int res = power(a,n/2)%mod1;
	return (res*res)%mod1;
}

int nCr(int n,int r) { 
    if (r == 0) 
        return 1; 
    int fac[n+1]; 
    fac[0] = 1; 
    for (int i=1;i<=n;i++) 
        fac[i] = (fac[i-1] * i)%mod1; 
  
    return (fac[n]%mod1 * power(fac[r], mod1-2)%mod1 * power(fac[n-r],mod1-2)%mod1)%mod1; 
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
        int A[n];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>A[i];
            mp[A[i]]++;
        }
        sort(A,A+n);
        int fq = mp[A[n-1]];                        // frequency of greatest element
        if(fq%2==0){
            int nd = power(2,n); 
            int x = nCr(fq,fq/2);           
            int draw = (x * power(2,n-fq))%mod1;    //number of draw conditions.
            cout<<(mod1+nd-draw)%mod1<<endl;
        }
        else{
            cout<<power(2,n)<<endl;
        }
    }
	return 0;
}