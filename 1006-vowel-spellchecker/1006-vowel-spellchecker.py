class Solution:
    def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
        def ch_vow(word):
            return "".join('*' if c in 'aeiou' else c for c in word)
        
        words_perfect = set (wordlist)
        words_cap= {}
        words_vow={}

        for w in wordlist:
            word_low=w.lower()
            words_cap.setdefault(word_low,w)
            words_vow.setdefault(ch_vow(word_low),w)

        def solve(query):
            if query in words_perfect:
                return query
            query_low=query.lower()
            if query_low in words_cap:
                return words_cap[query_low]
            query_lowV=ch_vow(query_low)
            if query_lowV in words_vow:
                return words_vow[query_lowV]
            return ""

        return list(map(solve,queries))