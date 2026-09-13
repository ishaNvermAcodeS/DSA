class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans0;
        vector<int> ans1;
        for(int i = 0; i < nums1.size(); i++){
            bool found = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }
            if(found == false){
                bool found1 = false;
                for(int k = 0; k < ans0.size(); k++){
                    if(nums1[i] == ans0[k]){
                        found1 = true;
                        break;
                    }
                }
                if(found1 == false){
                    ans0.push_back(nums1[i]);
                }
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            bool found = false;
            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                }
            }
            if(found == false){
                bool found1 = false;
                for(int k = 0; k < ans1.size(); k++){
                    if(nums2[i] == ans1[k]){
                        found1 = true;
                        break;
                    }
                }
                if(found1 == false){
                    ans1.push_back(nums2[i]);
                }
            }
        }
        vector<vector<int>> ansF;
        ansF.push_back(ans0);
        ansF.push_back(ans1);
        return ansF;
    }
};