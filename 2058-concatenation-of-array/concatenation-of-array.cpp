class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }
        for(int j = 0; j < nums.size(); j++){
            ans.push_back(nums[j]);
        }
        for(int  k = 0; k < ans.size(); k++){
            cout<<ans[k];
        }
        return ans;
    }
};