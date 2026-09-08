class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
            return false;
        }
        long long int x = 1;
        while(x <= n){
            if(x == n){
                return true;
            }
            else{
                x = x * 4;
            }
        }
        return false;
    }
};