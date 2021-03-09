class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), sortByLen);
        string encoded = words[0] + "#";

        for(int i = 1; i < words.size(); i++){

            if (encoded.find(words[i] + "#") == -1)
                encoded += words[i] + "#";
        }

        return encoded.size();
    }
    private:
    static bool sortByLen(string &a,string &b){
        return a.size()>b.size();
    }
};
