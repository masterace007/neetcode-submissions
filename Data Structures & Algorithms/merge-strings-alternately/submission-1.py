class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        n = max(len(word1),len(word2))
        m = len(word1)
        k = len(word2)
        for i in range(n):
            if i < m and i < k:
                ans += word1[i]
                ans += word2[i]
            elif i < m:
                ans += word1[i:]
                return ans
            else:
                ans += word2[i:]
                return ans
        return ans
