def minimumLengthEncoding(self, words: List[str]) -> int:
        words.sort(key=len, reverse=True)
        sentence = ""
        for i in words:
            if i+'#' not in sentence:
                sentence+=i+'#'
        return len(sentence)
