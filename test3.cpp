z



class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {

        sort(strs.begin(), strs.end(), [](const string &a, const string &b) {
        return a.length() < b.length(); // Ordre croissant par longueur
    });

    int count1 = 0;
    int count0 = 0;
    int countstr = 0;
    int nbr1,nbr0;
    for (const auto &s : strs) {
        nbr1 = nbr0 = 0;
        for (char c : s) {
            if (c == '1') nbr1++;
            else nbr0++;
        }
        count1 += nbr1;
        count0 += nbr0;
        if(count0>m || count1>n){
            
                count0-=nbr0;
                count1-=nbr1;
                goto fin;

            
        }
        countstr++;
        fin:
        
    }
    return countstr;


        
    }
};