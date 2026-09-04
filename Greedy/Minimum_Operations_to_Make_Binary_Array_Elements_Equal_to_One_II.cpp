#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Make Binary Array Elements Equal to One II 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;
        int totalOperations = 0 , idx = n - 1 , l = n - 1 ; 
        while ( l >= 0 && nums[l] == 0 ) {
              l -- ;
        }
        if ( l != n - 1 ) {
             totalOperations ++ ;
        }
        idx = l ;
        while ( idx >= 0 ) {
            // Grouping of Ones 
            while ( idx >= 0 && nums[idx] == 1 ) {
                   idx -- ;
            } 
            if ( idx < 0 ) {
                break ;
            }
            // Now do Grouping of these Zeros to Minimizing the Operations ;
            while ( idx >= 0 && nums[idx] == 0 ) {
                 idx -- ;
            }
            // Now in the Interval [idx,n-1] . There are only Two kinds of different number in consecutive Manner 
            totalOperations = totalOperations + ( 2 ) ; // Now Elements in Interval [idx,n-1] are Setted to one 

        }
        return totalOperations ; 
    }
};
