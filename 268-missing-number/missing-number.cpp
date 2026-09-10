class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Esum = n * (n + 1)/2;
        int Asum = 0;
        for(int i = 0; i < nums.size(); i++){
            Asum = Asum + nums[i];
        }
        if(Asum < Esum){
            return Esum - Asum;
        }
        return 0;
    }
};