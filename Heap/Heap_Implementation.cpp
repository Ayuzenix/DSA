#include<bits/stdc++.h>
using namespace std ;

class heap{
    public:
    vector<int>store ;
    int size = 0 ; // initially size of vector is Zero 
    void insert( int val ) { // Constructor 
        int idx = store.size() ;
        store.push_back( val ) ;
         int Pidx = ( idx - 1 ) / 2 ;
        while ( idx > 0 && store[Pidx] < store[idx] ) {
            swap( store[idx] , store[Pidx] ) ;
            idx = Pidx ;
            Pidx = ( idx - 1 ) / 2 ;
        }

    }

    void print() {
        for ( int i = 0 ; i < store.size() ; i ++ ) {
            cout<<store[i]<<" " ;
        }
    }

    void remove() {
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
} ;

int main() {

    heap hmax ;
    hmax.insert( 45 ) ;
    hmax.insert( 434) ;
    hmax.insert( 20 ) ;
    hmax.insert( 2) ;
    hmax.insert( 89) ;
    hmax.print() ;
    hmax.remove() ;
    cout<<"after removing first node from heap "<<endl ;
    hmax.print() ;


    return 0 ;
}
