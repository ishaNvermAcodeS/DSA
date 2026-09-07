class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int x = 0; x <= 30; x++){
            if(n == pow(2, x)){
                return true;
            }
        }
        return false;
    }
};