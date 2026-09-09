class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int day1 = prices[0];
        int profit = 0;
        int day2;
        for(int i = 1; i < prices.size(); i++){
            if(day1 > prices[i]){
                day1 = prices[i];
            }
            else{
                day2 = prices[i] - day1;
                if(day2 > profit){
                    profit = day2;
                }
            }
        }
        return profit;
    }
};