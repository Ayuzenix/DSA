#include <bits/stdc++.h>
using namespace std;

 // Problem:Devu and Friendship testing 
// Platform:CodeChef
 // Rating 1061

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
	    vector<int>store;
	    store.push_back(arr[0]);
	    sort(arr.begin(),arr.end());
	    for(int i=1;i<arr.size();i++){
	        if(arr[i]==arr[i-1]){
	            continue;
	        }else {
	            store.push_back(arr[i]);
	        }
	    }
	    cout<<store.size()<<endl;
	}
	return 0;

}
