#include<bits/stdc++.h>
using namespace std;

// Problem : Sorting Employee
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<string> sortRecords(vector<string>& employee, vector<int>& salary) {
        
        vector<pair<string,int>>store;
        for ( int i = 0 ; i < salary.size() ; i ++ ) {
             store.push_back({ employee[i] , salary[i] }) ;
        }
        sort ( store.begin() , store.end() , [] ( auto &a , auto &b) {
              if ( a.second==b.second) {
                  return a.first<b.first ;
              }
              return a.second<b.second ;
        });
        int l = 0 ;
        for ( auto & it : store ) {
             
             employee[l++] = it.first ;
        }
        return employee ;
    }
    
};
