#include <bits/stdc++.h>
using namespace std;

 // Problem:Equal Elements 
// Platform:CodeChef
 // Rating 1123

int main() {
	int t;
	cin>>t;
	while(t--){
	    int maxi=INT_MIN;
	    int n;
	    cin>>n;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        arr.push_back(m);
	    }
	    sort(arr.begin(),arr.end());
	    int count=1;
	    for(int i=1;i<arr.size();i++){
	        if(arr[i]==arr[i-1]){
	            count++;
	        }else {
	            count=1;
	        }
	        maxi=max(maxi,count);
	    }
	    int toSub=arr.size();
	    if(maxi==INT_MIN){
	        maxi=1;
	    }
	    cout<<toSub-maxi<<endl;
	}
	return 0;
}
