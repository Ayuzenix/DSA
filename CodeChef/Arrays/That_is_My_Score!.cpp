#include <bits/stdc++.h>
using namespace std;

// That is my Score
// Platform:CodeChef
// Rating:1094

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(11,0);
        for(int i=0;i<n;i++){
            int p,s;
            cin>>p>>s;
            if(arr[p-1]==0){
                arr[p-1]=s;
            }else {
                if(s>arr[p-1]){
                    arr[p-1]=s;
                }
            }
        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(i<=7){
                sum=sum+arr[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
