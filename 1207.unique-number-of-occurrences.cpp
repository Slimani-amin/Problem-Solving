/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        vector<int> Occu;
        int cmpt = 1;
        for(int i=0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    cmpt++;
                    arr.erase(arr.begin()+j);
                    j--;
                }
            }
            Occu.push_back(cmpt);
            cmpt=1;
        }
        for(int i =0;i<Occu.size();i++){
            for(int j=i+1;j<Occu.size();j++){
                if(Occu[i]==Occu[j]){
                    return false;
                }
            }
        }
        return true;
        
    }
};
// @lc code=end

