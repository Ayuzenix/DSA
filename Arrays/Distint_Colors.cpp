#include <bits/stdc++.h>
using namespace std;

// Problem:Distint Colors
// Platform:CodeChef

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        arr.push_back(m);
	    }
	    sort(arr.begin(),arr.end());
	    int sum=arr[0];
	    for(int i=1;i<arr.size();i++){
	        sum=sum+(arr[i]-arr[i-1]);
	    }
	    cout<<sum<<endl;
	}
    return 0;
}
