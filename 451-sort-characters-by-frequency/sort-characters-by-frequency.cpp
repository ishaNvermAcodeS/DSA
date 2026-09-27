class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        string a;
        while(!mp.empty()){
            int x = INT_MIN;
            char ch;
            for(auto c: mp){
                if(c.second > x){
                    x = c.second;
                    ch = c.first;
                }
            }
            for(int i = 0; i < x; i++){
                a += ch;
            }
            mp.erase(ch);
        }
        return a;
    }
};