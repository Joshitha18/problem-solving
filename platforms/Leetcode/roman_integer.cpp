//Add all numerals to the map. Then you iterate from 0 to s.length()-1. If i+1 == s.length(), you know that you are looking at the last character, so you can simply add it to the result. Same happens when the next character, i.e. arr[s[i+1]] value is less or equal than the current one. If this is not the case, meaning that the next character value is bigger than the current one, you subtract the current value from the result.

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        map <char,int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        for (int i = 0; i < s.length(); i++){
            if (i+1 == s.length() || arr[s[i+1]] <= arr[s[i]]){
                res += arr[s[i]];
            }
            else {
                res -= arr[s[i]];
            }
        }
        return res;
    }
};