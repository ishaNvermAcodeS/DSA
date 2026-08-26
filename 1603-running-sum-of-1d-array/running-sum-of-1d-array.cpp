class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            sum = x + sum;
            nums[i] = sum;
        }
        for(int i = 0; i < nums.size(); i++){
            cout<<nums[i]<< " ";
        }
        return nums;
    }
};