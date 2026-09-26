class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mp;
        for (char c: jewels) {
            mp.insert(c);
        }
        int count = 0;
        for (char c: stones) {
            if (mp.count(c)) {
                count++;
            }
        }
        return count;
    }
};