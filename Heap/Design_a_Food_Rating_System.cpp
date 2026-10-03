#include<bits/stdc++.h>
using namespace std ;

// Problem : Design a Food Rating System 
// Platform : Leetcode 

class FoodRatings {
public:         // NameOfFood typeOfCuisineOfIthFood InitialRatingOfIthFood
    unordered_map<string,string>foodToCuisine ;
    unordered_map<string,int>latestRating ;
    unordered_map<string,priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>>mp ;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for ( int i = 0 ; i < foods.size() ; i ++ ) {
             foodToCuisine[foods[i]] = cuisines[i] ;
             latestRating[foods[i]] = ratings[i] ;
             mp[cuisines[i]].push( { -ratings[i] , foods[i] } ) ;
        }
    }
    
    void changeRating(string food, int newRating) {
         latestRating[food] = newRating ;
         mp[foodToCuisine[food]].push( { -newRating , food } ) ;
    }
    
    string highestRated(string cuisine) {
        while ( !mp.empty() &&  ( -mp[cuisine].top().first ) != latestRating[mp[cuisine].top().second] ) {
            mp[cuisine].pop() ;
        }
        return mp[cuisine].top().second ; 
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
