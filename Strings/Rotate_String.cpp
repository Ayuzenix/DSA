#include<bits/stdc++.h>
using namespace std;

// Problem: Rotate String
// Platform: Leetcode
class Solution {
public:
    bool rotateString(string s, string goal) {
       int m=s.size() ,n=goal.size();
       if(m!=n){
        return false;
       }
       string finalstr=s+s;

       for(int i=0;i<finalstr.size();i++){
        string check="";
        for(int j=i;j<finalstr.size();j++){
            check=check+finalstr[j];
            if(check.size()==n && check==goal){
                return true;
            }
        }
       }
       return false;

    }

};
