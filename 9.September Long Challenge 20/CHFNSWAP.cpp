#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
typedef vector<int> VI;
 
int sum(int n){
	return (n*(n+1))/2;
}

int solve(int n,int S){
	int count=0;
	
	int cnst = 2*(S-n+1);
	long double dis = sqrt(1+4*cnst);
	int val = (dis-1)/2;
	//cout<<val<<endl;
	
	for(int i=val;i<n;i++){
		int diff = S-sum(i);
		if(diff < 0)
			break;
		if(diff==0){
		    int left = i;
		    int right = n-i;
		    count += ((left*(left-1))/2) + ((right*(right-1))/2);
		}
		if(diff <= n-1){
			if(diff>i)
			    count += n-diff;
			else{
			    if(diff>n-i)
			        count += n-i;
			    else
			        count += diff;
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
    while(t--)
    {
      	int n;
      	cin>>n;
      	int S = sum(n);
      	if(S%2!=0)
      		cout<<0<<endl;
      	else if(n==3)
      	    cout<<2<<endl;
      	else
      		cout<<solve(n,S/2)<<endl;
    }
	return 0;
}
