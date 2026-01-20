// LeetCode (3815. Design Auction System): 
// https://leetcode.com/problems/design-auction-system 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [HASH MAP], [DESIGN], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class AuctionSystem {
private:
    unordered_map<int, unordered_map<int, int>> itemUserBids; // S.C. = O(n) 
    unordered_map<int, pair<int, int>> itemMaxBidAndUser; // S.C. = O(n) 

    // T.C. = O(m); S.C. = O(1) 
    void findMaxBidAndUserId (int itemId) {

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

        itemMaxBidAndUser[itemId] = { maxBid, maxUserId };
    }

    // T.C. = O(m); S.C. = O(1) 
    void addOrUpdateExistingBid (int userId, int itemId, int newBidAmount) {

        itemUserBids[itemId][userId] = newBidAmount;

        findMaxBidAndUserId(itemId);
    }

public:
    AuctionSystem() {
        
    }
    
    // T.C. = O(m); S.C. = O(1) 
    void addBid(int userId, int itemId, int bidAmount) {
        addOrUpdateExistingBid(userId, itemId, bidAmount);
    }
    
    // T.C. = O(m); S.C. = O(1) 
    void updateBid(int userId, int itemId, int newAmount) {
        addOrUpdateExistingBid(userId, itemId, newAmount);
    }
    
    // T.C. = O(m); S.C. = O(1) 
    void removeBid(int userId, int itemId) {
        
        auto it = itemUserBids[itemId].find(userId);
        itemUserBids[itemId].erase(it);
        
        if (itemMaxBidAndUser[itemId].second != userId) {
            return;
        }

        if (itemUserBids[itemId].empty()) {
            itemMaxBidAndUser.erase(itemId);
            return;
        }

        findMaxBidAndUserId(itemId);
    }
    
    // T.C. = O(1); S.C. = O(1) 
    int getHighestBidder(int itemId) {
        
        if (itemMaxBidAndUser[itemId] == make_pair(0, 0)) {
            return -1;
        }

        return itemMaxBidAndUser[itemId].second;
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