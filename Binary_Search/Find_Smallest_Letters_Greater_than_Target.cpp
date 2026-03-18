#include<bits/stdc++.h>
using namespace std;

// Problem:Find Smallest Letters Greater than Target
// Platform:Leetcode

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int ans=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(ans==-1){
            return letters[0];
        }
        return ans;
    }
};
