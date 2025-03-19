/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
class Trie {
    private:
        set<string> s;
    public:
       
        Trie() {
            
        }
        
        void insert(string word) {
            s.insert(word);
            
        }
        
        bool search(string word) {
            return s.count(word);
            
        }
        
        bool startsWith(string prefix) {
            for(auto m:s){
                int i;
                for(i=0;i<prefix.size() && i<m.size();i++){
                    if(m[i]!=prefix[i]){
                        break;
    
                    }
                }
                if(i==prefix.size()){
                    return true;
                }
            }
    
            return false;
            
        }
    };
    
    /**
     * Your Trie object will be instantiated and called as such:
     * Trie* obj = new Trie();
     * obj->insert(word);
     * bool param_2 = obj->search(word);
     * bool param_3 = obj->startsWith(prefix);
     */
// @lc code=end

