#include<bits/stdc++.h>
using namespace std;

// Problem:Find the nth Root of Number
// Platform:TakeUForward
// Time Complexity:O(NlogN)

class Solution {
public:
  long long toCheck(int N,long long mid){
       long long multiply=1;
       for(int i=N;i>0;i--){
        multiply=multiply*mid;
       }
       return multiply;
  }
  int NthRoot(int N, int M) {
      // Range should be from 1 to Number itself
      long long low=1;
      long long high=M;
      while(low<=high){
        long long mid=(low+high)/2;
        if(toCheck(N,mid)==M){
            return mid;
        }else if(toCheck(N,mid)<M){
            low=mid+1;
        }else {
            high=mid-1;
        }
      }
      return -1;
    }
};
