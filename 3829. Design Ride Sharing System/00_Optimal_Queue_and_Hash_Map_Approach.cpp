// LeetCode (3829. Design Ride Sharing System): 
// https://leetcode.com/problems/design-ride-sharing-system 


// TAGS: [RATING: 1593], [MEDIUM], [OPTIMAL], [STL], [DESIGN], [QUEUE], [HASH TABLE], [LAZY DELETIONS] 


#include<bits/stdc++.h>
using namespace std;


class RideSharingSystem {
private:
    queue<int> riderQ;  // S.C. = O(n) 
    queue<int> driverQ; // S.C. = O(m) 
    unordered_map<int, bool> riderWaiting; // S.C. = O(n) 
    
public:
    RideSharingSystem() {
        
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void addRider(int riderId) {
        riderQ.push(riderId);
        riderWaiting[riderId] = true;
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void addDriver(int driverId) {
        driverQ.push(driverId);
    }
    
    // T.C. = O(n); S.C. = O(1) 
    vector<int> matchDriverWithRider() {
        
        while (!riderQ.empty() && !riderWaiting.count(riderQ.front())) {
            riderQ.pop();
        }
        
        if (!riderQ.empty() && !driverQ.empty()) {
            int riderId = riderQ.front();
            int driverId = driverQ.front();

            riderQ.pop();
            driverQ.pop();

            riderWaiting.erase(riderId);
            
            return { driverId, riderId };
        }

        return { -1, -1 };
    }
    
    // T.C. = O(1); S.C. = O(1) 
    void cancelRider(int riderId) {
        riderWaiting.erase(riderId);
    }
};


// Here, n = total number of riders, m = total number of drivers 


/*
    Your RideSharingSystem object will be instantiated and called as such:
    RideSharingSystem* obj = new RideSharingSystem();
    obj->addRider(riderId);
    obj->addDriver(driverId);
    vector<int> param_3 = obj->matchDriverWithRider();
    obj->cancelRider(riderId);
*/