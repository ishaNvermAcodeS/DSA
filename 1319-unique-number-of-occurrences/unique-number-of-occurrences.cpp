class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        unordered_map<int,int> seen;
        for(auto x : mp){
            if(seen.find(x.second) != seen.end()){
                return false;
            }
            seen[x.second] = 1;
        }
        return true;
    }
};