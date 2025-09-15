class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        br_ch=set(brokenLetters)
        splted_text=text.split()
        cnt=len(splted_text)
        for txt in splted_text:
            for ch in txt:
                if ch in br_ch:
                    cnt-=1
                    break
            
        return cnt
