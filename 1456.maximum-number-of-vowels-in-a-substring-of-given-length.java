/*
 * @lc app=leetcode id=1456 lang=java
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start


class Solution {
    public boolean isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    public int maxVowels(String s, int k) {
        int n = s.length();
        int maxV = 0;
        
        // Compter les voyelles dans la première fenêtre de taille k
        for (int i = 0; i < k; i++) {
            if (isVowel(s.charAt(i))) {
                maxV++;
            }
        }
        
        int currentCount = maxV;
        
        // Parcourir les fenêtres de taille k
        for (int i = 1; i <= n - k; i++) {
            if (maxV == k) {
                return k; // Si on atteint le maximum possible, on retourne directement
            }
            
            // Ajuster le compteur en fonction de la fenêtre glissante
            if (!isVowel(s.charAt(i - 1)) && isVowel(s.charAt(i + k - 1))) {
                currentCount++;
            } else if (isVowel(s.charAt(i - 1)) && !isVowel(s.charAt(i + k - 1))) {
                currentCount--;
            }
            
            // Mettre à jour le maximum
            if (currentCount > maxV) {
                maxV = currentCount;
            }
        }
        
        return maxV;
    }
}





// @lc code=end

