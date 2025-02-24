/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
cclass Solution {

    public:
        vector<string> letterCombinations(string digits) {
            vector<string> output;
            if(digits==""){
                return output;
            }
    
          map<int ,string> dict;
          dict[2] = "abc";
          dict[3] = "def";
          dict[4] = "ghi";
          dict[5] = "jkl";
          dict[6] = "mno" ;
          dict[7] = "pqrs";
          dict[8] = "tuv";
          dict[9] = "wxyz";
          
          
    
            vector<int> indices(digits.size(), 0);
            while(indices[0]<dict[digits[0]-'0'].size()){
                string mot ="";
             
                    for(int j=0; j<digits.size();j++){
                        mot+=dict[digits[j]-'0'][indices[j]];
                    }
                    output.push_back(mot);
     
                
                indices[indices.size()-1]+=1;
                if(indices[indices.size()-1]==dict[digits[indices.size()-1]-'0'].size()){
                for(int l=indices.size()-1;l>=1;l--){
                        if(indices[l]==dict[digits[l]-'0'].size()){
                            indices[l] = 0;
                            indices[l-1]+=1;
                        }
                    }
                }
    
    
                    
            }
    
    
    
                 
           
            
            return output;
        }
    };
// @lc code=end

