#include<bits/stdc++.h>
using namespace std;

int main(){
 
     vector<int>store={9,14,15,12,6,8,13};
     int n=store.size();
     for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && store[j-1]>store[j]){
            swap(store[j-1],store[j]);
            j--;
        }
     }
     for(int i=0;i<store.size();i++){
        cout<<" "<<store[i]<<" ";
     }

    return 0;
}
