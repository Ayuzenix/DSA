#include<bits/stdc++.h>
using namespace std;

// Problem:Longest Palindromic Substring
// Platform:leetcode

// Optimal Solution by using Expansion -left,right 
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string result="";
        for(int i=1;i<n;i++){
             // considering Odd length to be Longest Among Palindrome
             int low=i;
             int high=i;
             while(low>=0 && high<n && s[low]==s[high]){
                 low--;
                 high++;
             }
             string curr=s.substr(low+1,(high-low-1));
             if(curr.size()>result.size()){
                result=curr;
             }
        }
        for(int i=1;i<n;i++){
            // Considering Even length Palindrome to be longest
            int low=i-1;
            int high=i;
            while(low>=0 && high<n && s[low]==s[high]){
                 low--;
                 high++;
            }
            string curr=s.substr(low+1,high-low-1);
            if(curr.size()>result.size()){
                result=curr;
            }
        }
        if(result==""){
            return s.substr(0,1);
        }
        return result;
    }
};

// brute force solution 

class Solution {
public: // Longest Palindromic Substring -(brute force solution)
    bool isPalindrome(int x,int y,string &s){
        while(x<=y){
            if(s[x]!=s[y]){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
    string longestPalindrome(string s) {
           int n=s.size();
           string prev="";
           for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(i,j,s)==true){
                    if(prev.size()<(j-i+1)){
                        string beta="";
                        for(int k=i;k<=j;k++){
                            beta=beta+s[k];
                        }
                        prev=beta;
                    }
                }
            }
           }
           return prev;
    }
};
