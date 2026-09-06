#include<bits/stdc++.h>
using namespace std ;

// Problem : Design Twitter 
// Platform : Leetcode 

class Twitter {
public:
    int time = 0 ;
    vector<vector<int>>allInfoStore;
    vector<vector<pair<int,int>>>Rtweets; // Each id will have diff tweets tweeted 
    Twitter() {
        allInfoStore.resize( 501 ) ;
        Rtweets.resize( 501 ) ;
    }
    
    void postTweet(int userId, int tweetId) {
         int i = userId ; 
             if ( Rtweets[i].size() == 10 ) {
             int idx = 1 ;
             while ( idx < Rtweets[i].size() ) {
                Rtweets[i][idx-1] = Rtweets[i][idx] ;
                idx ++ ;
             }
             Rtweets[i].pop_back() ;
         }
         Rtweets[i].push_back( { time , tweetId } ) ;
         time ++ ;
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq ;
        int idx = userId ;
        vector<int>store ;
        for ( int i = 0 ; i < Rtweets[idx].size() ; i ++ ) {
             pq.push({Rtweets[idx][i].first, Rtweets[idx][i].second});
        }
        for ( int i = 0 ; i < allInfoStore[idx].size() ; i ++ ) {
             int id = allInfoStore[idx][i] ;
             for ( int j = 0 ; j < Rtweets[id].size() ; j ++ ) {
                pq.push( { Rtweets[id][j].first , Rtweets[id][j].second } ) ;
             }
        }
        int count = 0 ;
        while ( !pq.empty() && count < 10 ) {
              store.push_back( pq.top().second ) ;
              pq.pop() ;
              count ++ ;
        } 
        return store ;
    }
    void follow(int followerId, int followeeId) {
         int i = followerId ;
         for ( int j = 0 ; j < allInfoStore[i].size() ; j ++ ) {
              if ( allInfoStore[i][j] == followeeId ) {
                  return ;
              }
         }
         allInfoStore[i].push_back( followeeId ) ;
    }
    
    void unfollow(int followerId, int followeeId) {
         int i = followerId ;
         for ( int j  = 0 ; j < allInfoStore[i].size() ; j ++ ) {
              if ( allInfoStore[i][j] == followeeId ) {
                  int idx = j + 1 ;
                  while ( idx < allInfoStore[i].size() ) {
                         allInfoStore[i][idx-1] = allInfoStore[i][idx] ;
                         idx ++ ;
                  }
                  allInfoStore[i].pop_back() ;
                  break ;
              }
         }
         return ;
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
