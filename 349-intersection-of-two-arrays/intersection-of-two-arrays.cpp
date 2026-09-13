class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>ansF;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] != nums2[j]){
                    continue;
                }
                else{
                    ans.push_back(nums1[i]);
                }
            }
        }
        for(int i = 0; i < ans.size(); i++){
            bool found = false;
            for(int j = 0; j < ansF.size(); j++){
                if(ans[i] == ansF[j]){
                    found = true;
                    break;
                }
            }
            if(found == false){
                ansF.push_back(ans[i]);
            }
        }
        return ansF;
    }
};