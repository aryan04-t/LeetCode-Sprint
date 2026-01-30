// LeetCode (3815. Design Auction System): 
// https://leetcode.com/problems/design-auction-system 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ORDERED SET OF PAIR], [HASH MAP], [DESIGN], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


using ItemBidByUsers = unordered_map<int, set<pair<int, int>>>;
using IntPairSet = set<pair<int, int>>;

using ItemUserBids = unordered_map<int, unordered_map<int, int>>;
using IntHashMap = unordered_map<int, int>;


class AuctionSystem {
private:
    ItemBidByUsers itemBidByUsers; // S.C. = O(n) 
    ItemUserBids itemUserBids; // S.C. = O(n) 

    // T.C. = O(log(m) + log(m)) = O(log(m)); S.C. = O(1) 
    void addOrUpdateExistingEntry (int userId, int itemId, int newBidAmount) {
        
        int currBidAmount = itemUserBids[itemId][userId];
        if (currBidAmount != 0) {
            IntPairSet::iterator it = itemBidByUsers[itemId].find({ 
                currBidAmount, 
                userId 
            });
            itemBidByUsers[itemId].erase(it);
        }
        
        itemBidByUsers[itemId].insert({ newBidAmount, userId });
        itemUserBids[itemId][userId] = newBidAmount;
    }

public:
    AuctionSystem() {
        
    }
    
    // T.C. = O(log(m)); S.C. = O(1) 
    void addBid(int userId, int itemId, int bidAmount) {
        addOrUpdateExistingEntry(userId, itemId, bidAmount);
    }
    
    // T.C. = O(log(m)); S.C. = O(1) 
    void updateBid(int userId, int itemId, int newAmount) {
        addOrUpdateExistingEntry(userId, itemId, newAmount);
    }
    
    // T.C. = O(log(m)); S.C. = O(1) 
    void removeBid(int userId, int itemId) {
        int currBidAmount = itemUserBids[itemId][userId];
        
        IntPairSet::iterator it = itemBidByUsers[itemId].find({ 
            currBidAmount, 
            userId 
        });
        itemBidByUsers[itemId].erase(it);

        IntHashMap::iterator it2 = itemUserBids[itemId].find(userId);
        itemUserBids[itemId].erase(it2);
    }
    
    // T.C. = O(1); S.C. = O(1) 
    int getHighestBidder(int itemId) {
        
        if (itemBidByUsers[itemId].empty()) return -1;

        IntPairSet::reverse_iterator rIt = itemBidByUsers[itemId].rbegin(); 
        return rIt->second;
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