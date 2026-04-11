class Solution {
public: 

// Problem : Maximum Product of Word Lengths
// Platform : Leetcode 

// Approach : Bitmask Method 

    int maxProduct(vector<string>& words) {
        int n = words.size() ;
        vector<int>bit_mask( n , 0 ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            for ( int j = 0 ; j<words[i].size() ; j ++ ) {
                 bit_mask[i] = ( bit_mask[i] | 1<<(words[i][j]-'a') ) ;
            }
        }
        int maxi = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             for ( int j = i+1 ; j < n ; j ++ ) {
                 if ( ( bit_mask[i] & bit_mask[j]) == 0 ){
                       int x = words[i].size() ;
                       int y = words[j].size();
                       maxi = max( maxi , x * y ) ;
                 }
             }
        }
        return maxi ;
    }
};
