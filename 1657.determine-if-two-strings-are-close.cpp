/*
 * @lc app=leetcode id=1657 lang=cpp
 *
 * [1657] Determine if Two Strings Are Close
 */

// @lc code=start
class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            if(word1.size()!=word2.size()){
                return false;
            }
            map<char, int> m1;
            map<char, int> m2;
            set<char> chars1;
            set<char> chars2;
            for(int i=0;i<word1.size();i++){
                  m1[word1[i]]++;
                  m2[word2[i]]++;
                  chars1.insert(word1[i]);
                  chars2.insert(word2[i]);
            }
    
            if(chars1!=chars2){
                return false;
            }
            auto it1 = m1.begin();
            auto it2 = m2.begin();  
            vector<int> v1,v2;
            while(it1!=m1.end() && it2!=m2.end()){
                v1.push_back(it1->second);
                v2.push_back(it2->second);
                it1++;
                it2++;
    
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
    
            return v1==v2;
        }
    
    
           
    };
// @lc code=end

