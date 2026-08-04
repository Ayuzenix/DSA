#include<bits/stdc++.h>
using namespace std ;

// Problem : String Without AAA or BBB ( Solved by Purely Greedy + Simulation ( without Function ) ) 
// Platform : Leetcode 

class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string result = "" ;
        while ( a > 0 || b > 0 ) {
             if ( a == b ) {
                 while ( a > 0 || b > 0 ) {
                    if ( result == "" ) {
                    if ( a >= 2 ) {
                    result = result + "aa" ;
                    a = a - 2 ;
                    } else {
                        if ( a > 0 ) {
                            result = result + 'a' , a = 0 ;
                        }
                    }
                    if ( b >= 2 ) {
                    result = result + "bb" ;
                    b = b - 2 ;
                    } else {
                        if ( b > 0 ) {
                            result = result + 'b' , b = 0 ;
                        }
                    }
                    } else {
                        if ( result.back() == 'b') {
                            if ( a >= 2 ) {
                    result = result + "aa" ;
                    a = a - 2 ;
                    } else {
                        if ( a > 0 ) {
                            result = result + 'a' , a = 0 ;
                        }
                    }
                    if ( b >= 2 ) {
                    result = result + "bb" ;
                    b = b - 2 ;
                    } else {
                        if ( b > 0 ) {
                            result = result + 'b' , b = 0 ;
                        }
                    }
                        } else {
                            if ( b >= 2 ) {
                    result = result + "bb" ;
                    b = b - 2 ;
                    } else {
                        if ( b > 0 ) {
                            result = result + 'b' , b = 0 ;
                        }
                    }
                    if ( a >= 2 ) {
                    result = result + "aa" ;
                    a = a - 2 ;
                    } else {
                        if ( a > 0 ) {
                            result = result + 'a' , a = 0 ;
                        }
                    }
                        }
                    }
                 }
             } else if ( a > b ) {
               while ( a != b ) {
                if ( a >= 2 ) {
                    result = result + "aa" ;
                    a = a - 2 ;
                    } else {
                        if ( a > 0 ) {
                            result = result + 'a' , a = 0 ;
                        }
                    }
                if ( b != 0 ) {
                result = result + "b" ;
                b = b - 1 ; 
                }
               }
             } else {
                while ( b != a ) {
                if ( b >= 2 ) {
                    result = result + "bb" ;
                    b = b - 2 ;
                    } else {
                        if ( b > 0 ) {
                            result = result + 'b' , b = 0 ;
                        }
                    }
                if ( a != 0 ) {
                result = result + "a" ;
                a = a - 1 ;
                }    
                }
             }
        }
        return result ;
    }
};
