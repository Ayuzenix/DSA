#include<bits/stdc++.h>
using namespace std;

// Problem : Union of Array with Duplicates 
// Platform : GeeksforGeeks

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        sort( a.begin() , a.end() ) ;
        sort( b.begin() , b.end() ) ;
        int n = a.size() ;
        int m = b.size() ;
        vector<int>store ;
        int l1 = 0 ;
        int l2 = 0 ;
        while ( l1<n && l2<m ) {
            while ( l1!=0 && l1<n && a[l1] == a[l1-1]) {
                l1++;
            }
            while( l2!=0 && l2<m && b[l2] == b[l2-1]) {
                l2++ ;
            }
            if ( l1< n && l2<m && a[l1] == b[l2] ) {
                store.push_back( a[l1] ) ;
                l1++;
                l2++;
            }else if( l1<n && l2< m && a[l1]>b[l2]) {
                store.push_back( b[l2] ) ;
                l2++ ;
            }else if ( l1< n && l2<m && a[l1]<b[l2]) {
                store.push_back( a[l1] ) ;
                l1++ ;
            }
        }
        while( l1<n ) {
            while ( l1!=0 && l1<n && a[l1] == a[l1-1]) {
                 l1 ++ ;
            }
            if(l1<n) {
            store.push_back( a[l1] ) ;
            }
            l1++ ;
        }
        
        while( l2<m ){
            while( l2!=0 && l2<m && b[l2]==b[l2-1] ) {
                l2 ++ ;
            }
            if( l2<m ) {
            store.push_back( b[l2] ) ;
            }
            l2 ++ ;
        }
        return store ;
    }
};
