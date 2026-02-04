#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>result={13,46,52,20,6};
    int n=result.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(result[j]>result[j+1]){
                int temp=result[j];
                result[j]=result[j+1];
                result[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<" "<<result[i]<<" ";
    }

    return 0;
}
