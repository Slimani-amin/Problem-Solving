/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start

#include <vector>

#include <algorithm>


using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes;

        altitudes.push_back(0);

        for(int i=0;i<gain.size();i++){
            altitudes.push_back(altitudes[i]+gain[i]);

        }

        return *max_element(altitudes.begin(),altitudes.end());




        
    }
};
// @lc code=end

