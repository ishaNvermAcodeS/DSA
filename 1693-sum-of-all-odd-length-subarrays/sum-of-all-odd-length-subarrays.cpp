class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        if(arr.size() == 1){
            return arr[0];
        }

        int sumF = 0;
        for(int i = 0; i < arr.size(); i++){
            int sum1 = 0;
            sum1 = ((i+1)*(arr.size()-i)+1)/2;
            sumF = sumF + (sum1 * arr[i]);
        }
        return sumF;
    }
};