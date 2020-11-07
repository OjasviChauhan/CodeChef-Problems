#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;

int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int i = n;
        unordered_set<int> s;
        while(i>0){
            int city = (x+k)%n;
            if(s.find(city) != s.end()){
                break;
            }
            s.insert(city);
            x = city;
            i--;
        }
        if(s.find(y) != s.end()){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
	return 0;
}