// LeetCode (3815. Design Auction System): 
// https://leetcode.com/problems/design-auction-system 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [HASH MAP], [DESIGN], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class AuctionSystem {
private:
    unordered_map<int, unordered_map<int, int>> itemUserBids; // S.C. = O(n) 

    // T.C. = O(m); S.C. = O(1) 
    int findMaxBidUserId (int itemId) {

        if (itemUserBids[itemId].empty()) return -1;

        int maxBid = -1;
        int maxUserId = -1;

        for (const pair<int, int> p : itemUserBids[itemId]) {
            int currUserId = p.first;
            int currBid = p.second;

            if (currBid > maxBid) {
                maxBid = currBid;
                maxUserId = currUserId;
            }
            else if (currBid == maxBid && currUserId > maxUserId) {
                maxBid = currBid;
                maxUserId = currUserId;
            }
        }

        return maxUserId;
    }

public:
    AuctionSystem() {
        
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void addBid(int userId, int itemId, int bidAmount) {
        itemUserBids[itemId][userId] = bidAmount;
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void updateBid(int userId, int itemId, int newAmount) {
        itemUserBids[itemId][userId] = newAmount;
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void removeBid(int userId, int itemId) {
        auto it = itemUserBids[itemId].find(userId);
        itemUserBids[itemId].erase(it);
    }
    
    // T.C. = O(m); S.C. = O(1) 
    int getHighestBidder(int itemId) {
        return findMaxBidUserId(itemId);
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