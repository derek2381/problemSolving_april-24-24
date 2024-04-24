// problem link
// https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/

class Solution {
public:
    int minFlips(int a, int b, int c) {
        vector<int> tab(32);
        int count = 0;

        for(int i = 0;i < 32;i++)
        {
            if((a&1) != 0){
                tab[i] += 1;
            }

            if((b & 1) != 0){
                tab[i] += 1;
            }

            a >>= 1;
            b >>= 1;
        }


        for(int i = 0;i < 32;i++){
            if((c & 1) != 0){
                if(tab[i] == 0){
                    count++;
                }
            }else{
                if(tab[i] == 2){
                    count += 2;
                }else if(tab[i] == 1){
                    count++;
                }
            }
            c >>= 1;
        }
        return count;

    }
};
