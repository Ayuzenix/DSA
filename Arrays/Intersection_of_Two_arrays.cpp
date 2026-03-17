#include<bits/stdc++.h>
using namespace std;

// Problem:Intersection of Two Arrays 
// Platform:Leetcode

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         vector<int>store;
         int i=0,j=0;
         int k=0;
         while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                if(!store.empty() && store[k-1]!=nums1[i]){
                store.push_back(nums1[i]);
                i++;
                j++;
                k++;
                }else{
                    if(store.empty()){
                        store.push_back(nums1[i]);
                        k++;
                        i++;
                        j++;
                    }else{
                        i++;
                        j++;
                    }
                }
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                if(nums1[i]>nums2[j]){
                    j++;
                }
            }
         }
         return store;
    }
};
