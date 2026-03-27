#include <bits/stdc++.h>
using namespace std;

// Problem:Truth Tellers and Liars
// Platform:CodeChef
// Rating:1097

int main() {
    int t;
    cin>>t;
    while(t--){
         int N,M;
         cin>>N>>M;
         if(M>=N){
            cout<<"-1"<<endl;
         }else {
            int sum=2*M;
            sum=sum+1;
            cout<<sum<<endl;
         }
    }
    return 0;
}
