#include <bits/stdc++.h>
using namespace std;
#define fl(i, a, b) for (long long int i = (a); i < (b); i++)
#define flr(i, a, b) for(long long int i = (a); i >=(b); i--)
#define itr(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long int ll;
typedef vector<int> VI;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
 
int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
     ll n;
     cin >> n;
     ll c = 4*n - 1;
     map<ll, ll> X;
     map<ll, ll> Y;
     fl(i,0,c){
     	ll a,b;
     	cin >> a >> b;
     	X[a]++;
     	Y[b]++;
     } 
     for(auto x : X){
        if(x.second%2 != 0){
           cout<<(x.first)<<" ";
           break;
        } 
     }
     for(auto y : Y){
        if(y.second%2 != 0){
           cout<<(y.first)<<"\n";
           break;
        } 
     }
    }
	return 0;
}
