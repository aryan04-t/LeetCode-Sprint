// LeetCode (3815. Design Auction System): 
// https://leetcode.com/problems/design-auction-system 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE OPTIMAL], [HASH MAP], [HASH SET], [ORDERED SET], [DESIGN], [UNIQUE KEY GENERATION], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


using EntriesContainer = unordered_map<int, set<pair<int, int>>>;
using EntriesExistContainer = unordered_set<string>;
using IntPairSet = set<pair<int, int>>;


class AuctionSystem {
private:
    EntriesContainer itemBidByUsers; // S.C. = O(n) 
    EntriesExistContainer itemBidByUserExists; // S.C. = O(n) 
    
    // T.C. = O(1); S.C. = O(1); 
    string buildKey (int userId, int itemId) {
        string key = to_string(userId) + "--" + to_string(itemId);
        return key;
    } 

    // T.C. = O(m + log(m) + log(m)) = O(m); S.C. = O(1)
    void updateExistingEntry (int userId, int itemId, int bidAmount) {
         
        IntPairSet::iterator it = itemBidByUsers[itemId].begin(); 
        while (it->second != userId) it++;
        itemBidByUsers[itemId].erase(it);
        
        itemBidByUsers[itemId].insert({ bidAmount, userId });
    }
    
public:
    AuctionSystem() {
        
    }
    
    // T.C. = [Best Case: O(log(m)); Worst Case: O(log(m) + m) = O(m)]; 
    // S.C. = O(1) 
    void addBid(int userId, int itemId, int bidAmount) {

        string key = buildKey(userId, itemId);
        if (!itemBidByUserExists.count(key)) {
            itemBidByUsers[itemId].insert({ bidAmount, userId });
            itemBidByUserExists.insert(key);
            return;
        }

        updateExistingEntry(userId, itemId, bidAmount);
    }
    
    // T.C. = O(m); S.C. = O(1) 
    void updateBid(int userId, int itemId, int newAmount) {
        updateExistingEntry(userId, itemId, newAmount);
    }
    
    // T.C. = O(m); S.C. = O(1) 
    void removeBid(int userId, int itemId) {
        string key = buildKey(userId, itemId);
        itemBidByUserExists.erase(key);
        
        IntPairSet::iterator it = itemBidByUsers[itemId].begin(); 
        while (it->second != userId) it++;
        itemBidByUsers[itemId].erase(it);
    }
    
    // T.C. = O(1); S.C. = O(1) 
    int getHighestBidder(int itemId) {
        
        IntPairSet::reverse_iterator rIt = itemBidByUsers[itemId].rbegin(); 
        if (rIt == itemBidByUsers[itemId].rend()) return -1;
        else return rIt->second;
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