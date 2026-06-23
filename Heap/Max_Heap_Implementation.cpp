#include<bits/stdc++.h>
using namespace std ;

// Problem : Max Heap implementation
// Platform : Geeksforgeeks

class maxHeap {
  private:
    
    vector<int>store ;

  public:

    void push(int x) {
        int idx = store.size() ;
        store.push_back( x ) ;
        int Pidx = ( idx - 1 ) / 2 ;
        while ( idx > 0 && store[Pidx] < store[idx] ) {
            swap( store[Pidx] , store[idx] ) ;
            idx = Pidx ;
            Pidx = ( idx - 1 ) / 2 ;
        }
        return ;
    }

    void pop() {
        int n = store.size() - 1 ;
        store[0] = store[n] ;
        store.pop_back() ; // Means last element got removed 
        int idx = 0 , left = 2 * idx + 1 , right = 2 * idx + 2 , Pidx = idx ;
        if ( left < n && store[left] > store[Pidx] ) {
            Pidx = left ; // Curr max element 
        }
        if ( right < n && store[right] > store[Pidx] ) {
            Pidx = right ; // Curr max is right 
        }
        if ( Pidx == idx ) { // Means top element is maximum parent compare to children node
            return ;
        } else {
            while ( store[idx] < store[Pidx] ) {
                 swap( store[idx] , store[Pidx] ) ;
                 idx = Pidx ;
                 left = 2 * idx + 1 , right = 2 * idx + 2 ;
                 if ( left < n && store[left] > store[Pidx] ) {
                 Pidx = left ; // Curr max element 
                }
                if ( right < n && store[right] > store[Pidx] ) {
                Pidx = right ; // Curr max is right 
                }
            }
            return ;
        }
    }

    int peek() {
        if ( store.empty() ) {
            return -1 ;
        } else {
            return store[0] ;
        }
            
        }

    int size() {
        return store.size() ;
    }
};
