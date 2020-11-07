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
       int k;
       cin >> k;
       char A[8][8] = {};
       A[0][0] = 'O';
       int r = 0,c = 0;
       r = k / 8;
       c = k % 8;
       int x = c;
       bool flag;
       fl(i,r,8){
           fl(j,c,8){
               A[i][j] = 'X';
               if(i == r+1 && j == x){
                flag = true;
                break;
               }
           }
           if(flag) break; 
           c=0;
       }
       
       fl(i,0,8){
           fl(j,0,8){
               cout << A[i][j];
           }
           cout << endl;
       }
    }
	return 0;
}
