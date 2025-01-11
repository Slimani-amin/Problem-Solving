/*
 * @lc app=leetcode id=345 lang=java
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start

import java.util.ArrayList;

class Solution {
    private char [] Vowels = {'a', 'e', 'i', 'o', 'u'}; 
    public boolean isVowel(char a){
        
        for(char b : Vowels){
            if(Character.toLowerCase(a)==b){
                return true;
            }

        }
        return false;
    }

    public String reverseVowels(String s) {
        
        ArrayList<Character> Vo = new ArrayList<>();
        
        for (int i=0;i<s.length();i++){
            if(isVowel(s.charAt(i))){
                Vo.add(s.charAt(i));

            }

        }

        String rs = "";
        int j=  Vo.size() - 1;
        for(int i=0;i<s.length();i++){
            if(isVowel(s.charAt(i))){
                rs = rs + Vo.get(j);
                j--;
            }
            else{
                rs = rs + s.charAt(i);
            }
        }
        
        return rs;
        
    }
}
// @lc code=end

