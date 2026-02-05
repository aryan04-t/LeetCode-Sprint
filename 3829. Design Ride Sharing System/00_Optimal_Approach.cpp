// LeetCode (3829. Design Ride Sharing System): 
// https://leetcode.com/problems/design-ride-sharing-system 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [DESIGN], [QUEUE], [HASH TABLE], [LAZY DELETIONS] 


#include<bits/stdc++.h>
using namespace std;


class RideSharingSystem {
private:
    queue<int> riderQ;
    queue<int> driverQ;
    unordered_map<int, bool> riderWaiting;
    
public:
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        riderQ.push(riderId);
        riderWaiting[riderId] = true;
    }
    
    void addDriver(int driverId) {
        driverQ.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        
        while (!riderQ.empty() && !riderWaiting[riderQ.front()]) {
            riderQ.pop();
        }
        
        if (!riderQ.empty() && !driverQ.empty()) {
            int riderId = riderQ.front();
            int driverId = driverQ.front();

            riderWaiting.erase(riderId);
            riderQ.pop();
            driverQ.pop();
            
            return { driverId, riderId };
        }

        return { -1, -1 };
    }
    
    void cancelRider(int riderId) {
        riderWaiting.erase(riderId);
    }
};


/*
    Your RideSharingSystem object will be instantiated and called as such:
    RideSharingSystem* obj = new RideSharingSystem();
    obj->addRider(riderId);
    obj->addDriver(driverId);
    vector<int> param_3 = obj->matchDriverWithRider();
    obj->cancelRider(riderId);
*/