#include<bits/stdc++.h>
using namespace std ;

// Problem : UTF-8 Validation 
// Platform : Leetcode 

class Solution {
public:
    bool validUtf8(vector<int>& data) {
         int n = data.size() ;
         int l = 0 ; 
         while ( l < n ) {
                int count = 0 ;
                for ( int i = 7 ; i >=0 ; i -- ) {
                     int x = ( data[l] & ( 1 << i ) ) ;
                     if ( x == 0 ){
                        break ;
                     }else {
                        count ++ ;
                     }
                }
                if( count == 0 ){
                    l ++ ;
                }else if ( count == 2 ){
                    l ++ ;
                    if ( l == n ) {
                        return false ;
                    }
                    int curr = 0 ;
                    for ( int i = 7 ; i >=0 ; i -- ) {
                     int x = ( data[l] & ( 1 << i ) ) ;
                     if ( x == 0 ){
                        break ;
                     }else {
                        curr ++ ;
                     }
                }
                if ( curr !=1 ){
                    return false ;
                }
                l ++ ;
                }else if ( count == 3 ){
                    int x = l + 2 ;
                    l++;
                    while ( l<=x ) {
                        if ( l == n ){
                            return false ;
                        }
                        int curr = 0 ;
                    for ( int i = 7 ; i >=0 ; i -- ) {
                     int x = ( data[l] & ( 1 << i ) ) ;
                     if ( x == 0 ){
                        break ;
                     }else {
                        curr ++ ;
                     }
                }
                if ( curr!=1 ){
                    return false ;
                }
                l ++ ;
                    }
                    
                }else if ( count == 4 ) {
                    int x = l + 3 ;
                    l ++ ;
                    while ( l<=x ) {
                        if ( l == n ){
                            return false ;
                        }
                        int curr = 0 ;
                    for ( int i = 7 ; i >=0 ; i -- ) {
                     int x = ( data[l] & ( 1 << i ) ) ;
                     if ( x == 0 ){
                        break ;
                     }else {
                        curr ++ ;
                     }
                }
                if ( curr!=1 ){
                    return false ;
                }
                l ++ ;
                    }
                }else {
                    return false; 
                }

         }
         return true ;
    }
};
