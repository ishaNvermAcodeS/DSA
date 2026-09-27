class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int>mp1;
        unordered_map<string, int>mp2;
        for(int i = 0; i < list1.size(); i++){
            mp1[list1[i]] = i;
        }
        for(int i = 0; i < list2.size(); i++){
            mp2[list2[i]] = i;
        }
        vector<string>ans;
        int sum = 0;
        int sum1 = INT_MAX;
        for(auto x: mp1){
            if(mp2.find(x.first) != mp2.end()){
                sum = x.second + mp2[x.first];
                if(sum < sum1){
                    sum1 = sum;
                    ans.clear();
                    ans.push_back(x.first);
                }
                else if(sum == sum1) {
                ans.push_back(x.first);
                }
            }
        }
        return ans;
    }
};