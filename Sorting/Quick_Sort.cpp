#include<bits/stdc++.h>
using namespace std ;

// Problem : Quick Sort 
// Platform : TakeUForward 

class Solution {
public:

    int pivot( vector<int>&store , int low , int high ) {
    int point = store[high] ;
    int l = high - 1 , r = high - 1 ;
    while ( r >= low ) {
         if ( store[r] >= point ) {
             swap( store[r] , store[l] ) ;
             l -- ;
         }
         r -- ;
    }
    swap( store[high] , store[l+1] ) ;
    return ( l + 1 ) ;
    }
    void quick( vector<int>&store , int low , int high ) {
     if ( low >= high ) {
         return ;
     }
     int pIdx = pivot( store , low , high ) ;
     quick( store , low , pIdx - 1 ) ;
     quick( store , pIdx + 1 , high ) ;
    }
    vector<int> quickSort(vector<int>& store) {
     int n = store.size() ;
     quick( store , 0 , n - 1 ) ; 
     return store ;
    }
};
