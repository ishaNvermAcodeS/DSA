class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        if(pattern.size() != words.size()){
            return false;
        }
        for(int i = 0; i < pattern.length(); i++){
            if(mp1.find(pattern[i]) != mp1.end()){
                if(mp1[pattern[i]] != words[i]){
                    return false;
                }
            }
            else{
                mp1[pattern[i]] = words[i];
            }
            if(mp2.find(words[i]) != mp2.end()){
                if(mp2[words[i]] != pattern[i]){
                    return false;
                }
            }
            else{
                mp2[words[i]] = pattern[i];
            }
        }   
        return true;
    }
};