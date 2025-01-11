// @lc code=start
import java.util.ArrayList;

class Solution {
    public String reverseWords(String s) {
        StringBuilder output = new StringBuilder();
        StringBuilder mot = new StringBuilder();
        ArrayList<String> mots = new ArrayList<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != ' ') {
                mot.append(s.charAt(i));
            } else {
                if (mot.length() > 0) {
                    mots.add(mot.toString());
                    mot.setLength(0);
                }
            }
        }
        if (mot.length() > 0) {
            mots.add(mot.toString());
        }

        int l = mots.size();
        for (int i = 0; i < l; i++) {
            output.append(mots.get(l - 1 - i));
            if (i < l - 1) {
                output.append(" ");
            }
        }

        return output.toString();
    }
}
// @lc code=end