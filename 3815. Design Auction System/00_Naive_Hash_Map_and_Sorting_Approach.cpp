// LeetCode (3815. Design Auction System): 
// https://leetcode.com/problems/design-auction-system 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [HASH MAP], [ARRAY], [SORTING], [CUSTOM SORT], [DESIGN], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class AuctionSystem {
private:
    unordered_map<int, unordered_map<int, int>> itemUsersBids; 
    // S.C. = O(n) 

public:
    AuctionSystem() {
        
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void addBid(int userId, int itemId, int bidAmount) {
        itemUsersBids[itemId][userId] = bidAmount;
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void updateBid(int userId, int itemId, int newAmount) {
        itemUsersBids[itemId][userId] = newAmount;
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void removeBid(int userId, int itemId) {
        auto it = itemUsersBids[itemId].find(userId);
        itemUsersBids[itemId].erase(it);
    }
    
    // T.C. = O(m) + O(m*log(m)) = O(m*log(m)) 
    // S.C. = O(m) + O(log(m)) = O(m) 
    int getHighestBidder(int itemId) {

        if (itemUsersBids[itemId].empty()) return -1;
        
        vector<pair<int, int>> bidByUsers;

        for (const pair<int, int> p: itemUsersBids[itemId]) {
            int userId = p.first;
            int bidAmount = p.second;
            bidByUsers.push_back({ bidAmount, userId });
        }

        sort(
            bidByUsers.begin(),
            bidByUsers.end(),
            // greater<pair<int, int>>()
            [](pair<int, int> p1, pair<int, int> p2) {
                if (p1.first != p2.first) {
                    return p1.first > p2.first;
                }
                return p1.second > p2.second;
            }
        );

        return bidByUsers[0].second; 
    }
};


// Here, n = total number of active bids across all items, m = total number of active bids for a specific item 


/*
    Your AuctionSystem object will be instantiated and called as such:
    AuctionSystem* obj = new AuctionSystem();
    obj->addBid(userId,itemId,bidAmount);
    obj->updateBid(userId,itemId,newAmount);
    obj->removeBid(userId,itemId);
    int param_4 = obj->getHighestBidder(itemId);
*/