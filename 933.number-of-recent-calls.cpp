/*
 * @lc app=leetcode id=933 lang=cpp
 *
 * [933] Number of Recent Calls
 */

// @lc code=start
using namespace std;
class RecentCounter {
    private:
     queue<int> time;

public:
    RecentCounter() {
    }
    
    int ping(int t) {
        if(time.size()==0){
            time.push(t);
            return 1;
        }
         else{
            time.push(t);
            while(time.front()<t-3000 || time.front()>t){
                time.pop();
            }
            return time.size();
        }
         
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @lc code=end

