#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define int long long
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<endl;
typedef vector<int> VI;
int mod=1000000007;

bool isPowerOfTwo(int n){
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
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
        
        if(n==1){
            cout<<1<<endl;   
        }
        else if(isPowerOfTwo(n)){
            cout<<-1<<endl;
        }
        else{
            vector<int> v;
            v.pb(2);
            for(int i=3;i<=n;i++){
                if(isPowerOfTwo(i)){
                    v.pb(i+1);
                    v.pb(i);
                    i++;
                }
                else v.pb(i);
            }
            v.insert(v.begin()+2,1);
            print(v);
        }
    }
	return 0;
}
