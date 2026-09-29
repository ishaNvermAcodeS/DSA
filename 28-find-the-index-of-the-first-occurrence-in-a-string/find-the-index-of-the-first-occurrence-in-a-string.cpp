class Solution {
public:
    int strStr(string haystack, string needle) {
        int index;
        if(haystack.find(needle) == string::npos){
            return -1;
        }
        else{
            index = haystack.find(needle);
            return index;
        }
    }
};