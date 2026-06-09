#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Palindrome 
// Platform : Leetcode 

class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size(), count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int odd = 0 ;
        for (auto& it : mp) {
            if (it.second % 2 == 0) {
                count = count + it.second;
            } else if (it.second % 2 != 0) {
                count = count + (it.second - 1);
                odd ++ ;
            }
        }
        if ( odd == 0 ) {
            return count ;
        }
        return ( count + 1 ) ;
    }
};
