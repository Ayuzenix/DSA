#include <bits/stdc++.h>
using namespace std;
 
// Problem:Chef and Linear Chess
// Platform:CodeChef
// Rating:1200

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        arr.push_back(m);
	    }
	    int mini=INT_MAX;
	    int ans=-1;
	    for(int i=0;i<arr.size();i++){
	        if(k%arr[i]==0){
	            int curr=k/arr[i];
	            if(curr<mini){
	                mini=curr;
	                ans=arr[i];
	            }
	        }
	    }
	    if(mini==INT_MAX){
	        cout<<"-1"<<endl;
	    }else {
	        cout<<ans<<endl;
	    }
	}
	return 0;

}
