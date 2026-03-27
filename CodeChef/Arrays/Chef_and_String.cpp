#include <bits/stdc++.h>
using namespace std;

// Problem:Chef and String
// Platform:CodeChef
// Rating: 1094

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long sum=0;
	    vector<int>store;
	    for(long long i=0;i<n;i++){
	        long long m;
	        cin>>m;
	        store.push_back(m);
	    }
	    for(int i=1;i<store.size();i++){
	        if(store[i]>store[i-1]){
	            sum=sum+(store[i]-store[i-1]-1);
	        }else {
	            sum=sum+(store[i-1]-store[i]-1);
	        }
	    }
	    cout<<sum<<endl;
	}
   return 0;
}
