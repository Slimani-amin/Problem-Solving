#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class Solution{



 
public:
    static void test(){
        int numberCases;
        int lenght,a,b;

        cin>>numberCases;

        vector<int> solution;

        for(int i=0;i<numberCases;i++){
            cin>>lenght;
            vector<int> numbers(lenght);
            for(int j=0;j<lenght;j++){
                cin>>numbers[j];
            }


            while (numbers.size()>=2)
            {
                a = numbers[0];
                b = numbers[numbers.size()-1];

                numbers.pop_back();
                numbers.erase(numbers.begin());

                numbers.push_back(floor((a+b)/2));



            }

            solution.push_back(numbers[0]);
            
            
            
        }

         for(int v : solution){
            cout<<v<<endl;
         }
    }

   
    
};



int main(){


    Solution::test();


    return 0;
}