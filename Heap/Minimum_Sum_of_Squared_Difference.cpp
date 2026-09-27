#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Sum of Squared Difference 
// Platform : Leetcode 

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long n = nums1.size() ;
        long long totalOperations = ( k1 + k2 ) ;
        long long x = 1e5 ;
        vector<long long>freq( x + 1 , 0 ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             freq[abs(nums1[i] -nums2[i])] ++ ;
        }
        for ( long long i = x ; i > 0 ; i -- ) {
             if ( totalOperations >= freq[i] ) {
                 freq[i-1] = freq[i-1] + freq[i] ;
                 totalOperations = totalOperations - freq[i] ;
                 freq[i] = 0 ;
             } else { // This time all Operations will get drained 
                 freq[i-1] = freq[i-1] + totalOperations ;
                 freq[i] = freq[i] - totalOperations ;
                 totalOperations = 0 ;
                 break ;
             }
        }
        long long result = 0 ;
        for ( long long i = 0 ; i < ( x + 1 ) ; i ++ ) {
             long long curr = ( long long )( i * i ) ;
             result = result + ( curr * freq[i] ) ; // ( difference square * ( How many times that difference arrises) ) 
        }
        return result ; 
    }
};
