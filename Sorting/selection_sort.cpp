#include<bits/stdc++.h>
using namespace std;
// Selection sort 
int main(){
    vector<int>store={13,46,24,52,20,9};
    int n=store.size();
    for(int i=0;i<n-1;i++){
       int mini=i;
       for(int j=i+1;j<n;j++){
        if(store[j]<store[mini]){
            mini=j;
        }
       }
       swap(store[i],store[mini]);
    }
    for(int i=0;i<store.size();i++){
        cout<<" "<<store[i]<<" ";
    }
    return 0;
}
