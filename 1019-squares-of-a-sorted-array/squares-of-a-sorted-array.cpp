class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = 0;
        int y = 0;
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            k = nums[i]*nums[i];
            nums[i] = k;
        }
        sort(nums.begin(), nums.end());
        return nums;
        }
};