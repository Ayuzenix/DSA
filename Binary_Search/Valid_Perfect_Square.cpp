#include<bits/stdc++.h>
using namespace std;

// Problem:Valid Perfect Square
// Platform:Leetcode

class Solution {
public:
    bool isPerfectSquare(int num) {
         long long low=1;
         long long high=(long long)num;
         while(low<=high){
            long long mid=(low+high)/2;
            if(mid*mid==(long long)num){
                return true;
            }else if(mid*mid>(long long)num){
                high=mid-1;
            }else if(mid*mid<(long long)num){
                low=mid+1;
            }
         }
         return false;
    }
};
