class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        vector<char> result;
        while(i < chars.size()){
            int j = i;
            result.push_back(chars[i]);
            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            int count = j - i;
            i = j;
            if(count > 1){
                string num = to_string(count);
                for(int h = 0; h < num.size(); h++){
                    result.push_back(num[h]);
                }
            }
            }
            chars.clear();
            for(int g = 0; g < result.size(); g++){
                chars.push_back(result[g]);
            }
            return chars.size();
        }
    };