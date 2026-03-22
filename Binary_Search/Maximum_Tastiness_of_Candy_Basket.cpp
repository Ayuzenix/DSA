#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Tastiness of Candy Basket 
// Platform:Leetcode 
// Time Complexity:o(nlog(n))

class Solution {
public:
    int countCandy(vector<int>&price,int mid,int k){
        int n=price.size();
        int count=1;
        int prev=price[0];
        for(int i=1;i<n;i++){
            if(abs(price[i]-prev)>=mid){
                count++;
                prev=price[i];
            }
        }
        return (count>=k);
    }
    int maximumTastiness(vector<int>& price, int k) {
        int n=price.size();
        sort(price.begin(),price.end());
        int low=0;
        int high=price[n-1]-price[0];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(countCandy(price,mid,k)==true){
                ans=mid;
                low=mid+1;
            }else {
                high=mid-1;
            }
        }
        return ans;
    }
};
