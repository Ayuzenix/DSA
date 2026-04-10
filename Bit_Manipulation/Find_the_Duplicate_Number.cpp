#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Duplicate Number 
// Platform : Leetcode 

//-->Approach(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        for ( int i = 0 ; i < n ; i ++ ) {
             int x = abs(nums[i]) ;
             if ( ( nums[x-1]) > 0){
                  nums[x-1] =-nums[x-1];
             }else if ( nums[x-1] < 0 ) {
                  return x ;
             }
        }
        return 0 ;
    }
};

// --> best Approach( here and tortoise method)
class Solution {
public:
    // here and tortoise method 
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        int slow = nums[0] ;
        int fast = nums[0] ;
        slow = nums[slow] ;
        fast = nums[nums[fast]] ;
        while ( slow != fast ){
               slow = nums[slow] ;
               fast = nums[nums[fast]] ;
        }
        slow = nums[0] ;
        while ( slow !=fast ){
            slow = nums[slow] ;
            fast = nums[fast] ;
        }
        return slow ;
    }
};
