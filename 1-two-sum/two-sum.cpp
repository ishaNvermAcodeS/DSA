class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int a = 0;
        int b = 0;
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                a = mp[need];
                b = i;
            }
            mp[nums[i]] = i;
        }
        return {a, b};
    }
};