// problem link
// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        int tab[31][n];

        for(int i = 0;i < 30;i++){
            for(int j = 0;j < n;j++){
                if((candidates[j] & 1) != 0){
                    tab[i][j] = 1;
                }else{
                    tab[i][j] = 0;
                }
                candidates[j] >>= 1;
            }
        }
        int max = 1, count = 0;

        for(int i = 0;i < 30;i++){
            count = 0;
            for(int j = 0; j< n;j++){
                if(tab[i][j] == 1){
                    count++;
                    if(count > max){
                        max = count;
                    }
                }
            }
        }

            return max;
    }
};
