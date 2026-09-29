class Solution {
public:
    string reverseVowels(string s) {
        char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i = 0;
        int j = s.size() - 1;
        char k;
        char p;
        while(i < j){
            if(find(arr, arr + 10, s[i]) == arr + 10){
               i++;
               continue;
            }
            if(find(arr, arr + 10, s[j]) == arr + 10){
                j--;
                continue;
            }
            if(find(arr, arr + 10, s[j]) != arr + 10 && find(arr, arr + 10, s[i]) != arr + 10){
                k = s[i];
                s[i] = s[j];
                s[j] = k;
            }
            i++;
            j--;
        }
        return s;
    }
};