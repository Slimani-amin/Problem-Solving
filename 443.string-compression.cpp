/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
#include <string>
class Solution {
public:
    int compress(vector<char>& chars) {
        int cmpt,output, indice,j;
        indice = 0;
        cmpt = 1;
        output = 1;
        std::string str = "";


        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[indice]){
                cmpt++;
            }
            else{
                if(cmpt>1){ 
                    str = std::to_string(cmpt);
                    for(j=0;j<str.size();j++){
                        chars[output++] = str[j];
                        
                    }
                    
                }
                    indice = i;
                    chars[output++] = chars[i];
                    cmpt=1;
                    
            }
        }
        if(cmpt>1){
            str = std::to_string(cmpt);
            for(j=0;j<str.size();j++){
                        chars[output++] = str[j];
                        
                    }
        }
        return output;
        
    }
};
// @lc code=end

