#include<bits/stdc++.h>
using namespace std;

// Problem : Combination sum Without Repetition
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<vector<int>>result;
    void solve ( vector<int>& arr , vector<int> store , int & target , int curr , int n ,int idx ) {
        
        if ( curr < 0 ) {
            return ;
        }
        if ( curr == 0 ) {
            result.push_back( store );
            return ;
        }
        
        for ( int i = idx ; i < n ; i ++ ){
            if ( i > idx && arr[i] == arr[i-1] ) {
                continue;
            }
            store.push_back( arr[i] ) ;
            solve ( arr , store , target , curr-arr[i] , n , i + 1 );
            store.pop_back() ;
        }
        return ;
    }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
       sort ( arr.begin() , arr.end() ) ;
       int n = arr.size() ;
       vector<int> store ;
       solve ( arr , store , target , target , n , 0 ) ;
       return result ;
         
    }
};
