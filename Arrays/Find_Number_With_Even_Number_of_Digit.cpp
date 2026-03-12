#include<bits/stdc++.h>
using namespace std;

// Problem:Find Number with Even Number of digit
// Platform:Leetcode

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int c_count=0;
            int num=nums[i];
            while(num>0){
                c_count++;
                num=num/10;
            }
            if(c_count%2==0){
                count++;
            }
        }
        return count;
    }
};
