class Solution {
public:
    bool isPalindrome(string s) {
        string empty = "";
        string set = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                empty += s[i];
            }
        }
        for(char &c: empty){
            c = tolower(c);
        }
        int i = 0;
        int j = empty.size() - 1;
        while(i < j){
            if(empty[i] != empty[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};