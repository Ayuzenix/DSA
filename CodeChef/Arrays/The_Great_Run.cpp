#include <bits/stdc++.h>
using namespace std;
 
// Problem:The Great Run
// Platform:CodeChef
// Rating:1097

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n>>k;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        arr.push_back(m);
	    }
	    int sum=0;
	    int maxi=INT_MIN;
	    int l=0,r=0,m=arr.size();
	    while(r<m){
	        sum=sum+arr[r];
	        while((r-l+1)>k){
	            sum=sum-arr[l];
	            l++;
	        }
	        maxi=max(maxi,sum);
	        r++;
	    }
	   cout<<maxi<<endl; 
	}
   return 0;
}
