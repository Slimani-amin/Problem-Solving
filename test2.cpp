#include <iostream>



class Solution {
public:
        int countPrimes(int n) {
            if(n<=2){
                return 0;
            }
            int count = 0;

            bool tab[n];
             tab[0]=false;
            tab[1]=false;
            for(int i=2;i<n;i++){
                tab[i]=true;
            }

           
            for(int i=2;i<n;i++){
                if(tab[i]){
                    count++;

                    for(int j=2;i*j<n;j++){
                        tab[i*j]=false;
                    }

                }
            }
            return count;
        }
};
