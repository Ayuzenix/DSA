#include<bits/stdc++.h>
using namespace std ;

// Problem : Swap Two Number by Using XOR 
// Platform : TakeUForword

class Solution {
public: 
    // By using XOR Operator 
    void swap(int &a, int &b) {
        
        a = a ^ b ;
        b = a ^ b ;
        a = a ^ b ;
        return ;

    }
};
