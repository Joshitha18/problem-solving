class Solution:

    def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
        words = set(wordlist)
        lower_case = defaultdict(list)
        no_vowel = defaultdict(list)
        vowels = set(['a', 'e', 'i', 'o', 'u'])
        res = []

        def de_vowels(word):
            no_vowels = []
            for ch in word:
                ch = ch.lower()
                if ch in vowels: no_vowels.append('*')
                else: no_vowels.append(ch)
            return ''.join(no_vowels)

        for word in wordlist:
            lower_case[word.lower()].append(word)
            no_vowel[de_vowels(word)].append(word)

        for query in queries:
            if query in words:
                res.append(query)
            elif (lowercase := query.lower()) in lower_case:
                res.append(lower_case[lowercase][0])
            elif (novowels := de_vowels(query)) in no_vowel:
                res.append(no_vowel[novowels][0])
            else:
                res.append('')

        return res
