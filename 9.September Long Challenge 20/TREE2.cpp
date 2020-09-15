#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
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
      	for(int i=0;i<n;i++){
      		cin>>A[i];
      	}

      	unordered_set<int> us;
      	for(int i=0;i<n;i++){
      		if(A[i]!=0 && us.find(A[i])==us.end()){
      			us.insert(A[i]);
      		}
      	}
      	cout<<us.size()<<endl;
    }
	return 0;
}
