class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
    unordered_set<string> words;
    unordered_map<string, string> lower_case, no_vowel;

    for (auto word : wordlist) {
            words.insert(word);
            lower_case.insert({to_lower(word), word});
            no_vowel.insert({de_vowels(word), word});
        }
       vector<string> res;

        for (auto query : queries) {
            string lowercase = to_lower(query), novowels = de_vowels(query);

            if (words.find(query) != words.end())
                res.push_back(query);

            else if (lower_case.find(lowercase) != lower_case.end())
                res.push_back(lower_case[lowercase]);

            else if (no_vowel.find(novowels) != no_vowel.end()){
                res.push_back(no_vowel[novowels]);
            }

            else res.push_back("");
        }
        return res;
    }


    private:
    string to_lower(string word) {
       transform(word.begin(), word.end(), word.begin(), ::tolower);
        return word;
    }
    //remove vowels
    string de_vowels(string word) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        word=to_lower(word);
        for (auto& letter : word) {
            if (vowels.find(letter) != vowels.end()) {
                letter = '*';
            }
        }
        return word;
    }
};
