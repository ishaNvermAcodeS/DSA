class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int x = 0;
        for(int i = 0; i < candies.size(); i++){
            if(x < candies[i]){
                x = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= x){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};