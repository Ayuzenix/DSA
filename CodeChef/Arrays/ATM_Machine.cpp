#include <bits/stdc++.h>
using namespace std;
 
// Problem:ATM Machine
// Platform:CodeChef
// Raing:1001

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
	    string ans="";
	    for(int i=0;i<arr.size();i++){
	        if(k>=arr[i]){
	            ans=ans+'1';
	            k=k-arr[i];
	        }else{
	            ans=ans+'0';
	        }
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
