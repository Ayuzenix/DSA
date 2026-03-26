#include <bits/stdc++.h>
using namespace std;

// Problem:Dominant Element 
// Platform:CodeChef

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        mp[m]++;
	    }
	    vector<int>store;
	    for(auto &it:mp){
	        store.push_back(it.second);
	    }
	    sort(store.begin(),store.end());
	    int gama=store.size();
	    if(store[gama-1]==store[gama-2]){
	        cout<<"NO"<<endl;
	    }else {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
