#include<bits/stdc++.h>
using namespace std;

// Problem:Magnetic Force between balls
// Platform:Leetcode

class Solution {
public:
    bool to_check(int mid,vector<int>&position,int m){
        int prev=position[0];
        int count=1;
        for(int i=1;i<position.size();i++){
            if(abs(position[i]-prev)>=mid){
                count++;
                prev=position[i];
            }
            if(count==m){
                return true;
            }
        }
        return (count>=m);
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int low=1; //-->Minimum Distance
        int high=position[n-1]-position[0]; //-->Maximum Distance
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(to_check(mid,position,m)==true){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
