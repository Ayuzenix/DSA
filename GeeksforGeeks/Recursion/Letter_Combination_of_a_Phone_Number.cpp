#include<bits/stdc++.h>
using namespace std;

// Problem : Letter Combination of a Phone Number
// Platform : GeeksforGeeks

class Solution {
public:
    
    void solve ( string &digits, vector<string>&store, string curr , unordered_map<char,string>&mp,int & n , int idx ) {
         if ( idx == n) {
            store.push_back( curr ) ;
            return ;
         }
         string str=mp[digits[idx]] ;
         if ( str =="") {
            solve ( digits, store , curr , mp , n , idx + 1 ) ;
         }
         for ( int i = 0 ; i < str.size() ; i ++ ) {
              curr.push_back( str[i]) ;
              solve ( digits, store , curr , mp , n , idx + 1 ) ;
              curr.pop_back() ;
         }
         return ;
    }

    vector<string> letterCombinations(string digits) {
        vector<string>store ;
        int n =digits.size() ;
        string curr;
        unordered_map<char,string>mp;
        mp['1'] = "";
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        solve(digits,store,curr,mp,n,0);
        return store ;
    }
};
