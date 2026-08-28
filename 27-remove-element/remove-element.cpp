class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
             if(nums[i] != val){
                nums.insert(nums.begin(), nums[i]);
                nums.erase(nums.begin() + i + 1);
                k++;
             }
        }
        return k;
    }
};