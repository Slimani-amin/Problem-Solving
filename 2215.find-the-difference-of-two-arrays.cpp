/*
 * @lc app=leetcode id=2215 lang=cpp
 *
 * [2215] Find the Difference of Two Arrays
 */

// @lc code=start
#include <algorithm> 
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

           for(int i=0;i<nums1.size();i++){
        for(int j=i+1;j<nums1.size();j++){
        if(nums1[i]==nums1[j]){
            nums1.erase(nums1.begin() + j);
            j--;
        }
       }
       }
       
      for(int i=0;i<nums2.size();i++){
        for(int j=i+1;j<nums2.size();j++){
        if(nums2[i]==nums2[j]){
            nums2.erase(nums2.begin() + j);
            j--;
        }
       }
       }

     
       for(auto it1 = nums1.begin();it1!=nums1.end();it1++){
       
        for(auto it2 = nums2.begin();it2!=nums2.end();it2++){

            
            
            if(*it1==*it2){
                nums1.erase(it1);
                nums2.erase(it2);
          
                it1--;
                break;
                
               

            }
        }
       }

       vector<vector<int>> resultat;
       resultat.push_back(nums1);
       resultat.push_back(nums2);
       return resultat;

    }
};
// @lc code=end

