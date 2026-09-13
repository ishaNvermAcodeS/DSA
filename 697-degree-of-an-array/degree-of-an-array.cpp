class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> count;
        map<int, int> first;
        map<int, int> last;
        int degree = 0;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
            if(first.find(nums[i]) == first.end()){
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
            if(count[nums[i]] > degree){
                degree = count[nums[i]];
            }
        }
        int ans = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(count[nums[i]] == degree){
                int length = last[nums[i]] - first[nums[i]] + 1;
                if(length < ans){
                    ans = length;
                }
            }
        }
        return ans;
    }
};