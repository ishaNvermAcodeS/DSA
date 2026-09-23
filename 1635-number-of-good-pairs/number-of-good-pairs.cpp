class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int pair = 0;
        for(int x : nums){
            if(mp.find(x) != mp.end()){
                pair = pair + mp[x];
            }
            mp[x]++;
        }
        return pair;
    }
};