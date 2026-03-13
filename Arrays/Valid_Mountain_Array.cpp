#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int n=arr.size();
         int count=0;
         for(int i=1;i<n-1;i++){
            if((arr[i]==arr[i-1]) || (arr[i]==arr[i+1])){
                return false;
            }
            if((arr[i]<arr[i-1]) && (arr[i]<arr[i+1])){
                return false;
            }
            if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
                count++;
            }
         }
         return (count==1);
    }
};
