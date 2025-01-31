/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {

public:
    string decodeString(string s) {
    string nmbr ="";
    stack<int> coef;
    int j,pos1;
    string output ="";
    string mot="";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            nmbr+=s[i];
            
        }
        else if(s[i]=='['){
            coef.push(stoi(nmbr));
            nmbr ="";
            output+=s[i];
        }
        else if(s[i]==']'){
            pos1 = output.rfind('[');
            for(j=0;j<coef.top();j++){
                mot += output.substr(pos1+1);
            }
            output.replace(pos1,output.size()-pos1,mot);
            coef.pop();
            mot="";
        }
        else{
            output+=s[i];
        }
        }

      

        return output;
    }
};
// @lc code=end

