class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int x;
        int finalsum = 0;
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                x = accounts[i][j];
                sum = x + sum;
            }
            if(sum > finalsum){
                finalsum = sum;
            }
        }
        return finalsum;
    }
};