#include<bits/stdc++.h>
using namespace std ;

// Problem : Union of Two Sorted Array 
// Platform : GeeksforGeeks 

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int l = 0 , r = 0 ;
        vector<int>result ;
        int prev = -1 ;
        while ( l < a.size() && r < b.size() ) {
            if ( a[l] < b[r] ) {
            if ( prev != a[l] ){
                result.push_back(a[l]) ;
                prev = a[l] ;
                l++;
            }else {
                while( l < a.size() && a[l] == prev){
                    l ++ ;
                }
            }    
            }else if ( b[r] < a[l] ) {
            if ( prev != b[r] ) {
                result.push_back(b[r]) ;
                prev = b[r] ;
                r ++ ;
            }else {
                while( r < b.size() && b[r] == prev ) {
                    r ++ ;
                }
            }
            }else {
                if ( prev != a[l]) {
                result.push_back(a[l]) ;
                prev = a[l] ;
                l ++ ;
                r ++ ;
                }else {
                l ++ ;
                r ++ ;
                }
            }
        }
        while ( l < a.size() ) {
           if ( prev != a[l] ){
                result.push_back(a[l]) ;
                prev = a[l] ;
                l++;
            }else {
                while( l < a.size() && a[l] == prev){
                    l ++ ;
                }
            }     
        }
        while ( r < b.size() ) {
            if ( prev != b[r] ) {
                result.push_back(b[r]) ;
                prev = b[r] ;
                r ++ ;
            }else {
                while( r < b.size() && b[r] == prev ) {
                    r ++ ;
                }
            }
        }
        return result ;
    }
};
