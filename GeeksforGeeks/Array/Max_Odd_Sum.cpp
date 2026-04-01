#include<bits/stdc++.h>
using namespace std;

// Problem : Max Odd Sum 
// Platform : GeeksforGeeks

class Solution {
  public:
    // Function to find maximum odd subarray sum.
    int findMaxOddSum(vector<int> &arr) {
        int maxneg=INT_MIN;
        int minpos=INT_MAX;
        int sum = 0 ;
        for (int i = 0 ; i < arr.size() ; i ++ ) {
            if (arr[i]>=0){
            sum = sum + arr[i] ;
            
            }
            if ( arr[i]>=0 && arr[i] % 2 !=0 ) {
                minpos=min(minpos,arr[i]) ;
            }
            if ( arr[i]<0 && arr[i] % 2 != 0) {
                maxneg=max(maxneg,arr[i]);
            }
            
        }
        if ( sum % 2 !=0 ){
            return sum ;
        }
        int ans = INT_MIN;
        if ( sum % 2 == 0 ){
            ans = max( ans , sum - minpos ) ;
        }
        if ( sum % 2 == 0 ){
            ans = max( ans , sum + maxneg);
        }
        return ans ;
    }
};
