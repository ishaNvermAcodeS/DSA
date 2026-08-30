class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int sumL = 0;
            int sumR = 0;
            for(int j = 0; j < i; j++){
                sumL = sumL + nums[j];
            }
            for(int j = i + 1; j < nums.size(); j++){
                sumR = sumR + nums[j];
            }
            if(sumL == sumR){
                return i;
            }
        }
        return -1;
    }
};