class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(char x: magazine){
            mp1[x]++;
        }
        for(char y: ransomNote){
            mp2[y]++;
        }
        for(auto x: mp2){
            if(mp1.find(x.first) == mp1.end() || mp1[x.first] < x.second){
                return false;
            }
        }
        return true;
    }
};