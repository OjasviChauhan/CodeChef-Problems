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
      	int A[n][n];
      	for(int i=0;i<n;i++){
      		for(int j=0;j<n;j++){
      			cin>>A[i][j];
      		}
      	}
      	
      	int arr[n-1];
      	for(int i=1;i<n;i++){
      		if(A[i][0] == (i*n)+1)
      			arr[i-1]=0;
      		else
      			arr[i-1]=1;
      	}
      	
    //  for(int i=0;i<n-1;i++) 
    //      cout<<arr[i]<<" ";

      	int end=n-2,flag,count=0;
      	while(end>=0){
      		if(arr[end]==1){
      			count ++;
      			flag = 1;
      			break;
      		}
      		end--;
      	}
      	for(int i=end-1;i>=0;i--){
      		if(arr[i]!=flag){
      			count++;
      			flag = arr[i];
      		}
      	}
      	cout<<count<<endl;
    }
	return 0;
}
