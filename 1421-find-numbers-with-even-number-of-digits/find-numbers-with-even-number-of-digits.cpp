class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int digits = 0;
            while(x > 0) {
                x = x / 10;
                digits++;
            }
            if(digits % 2 == 0) {
                n++;
            }
        }
        return n;
    }
};