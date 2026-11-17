class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = strs[0]
        for i in range(1,len(strs)):
            n = len(ans) if len(strs[i]) > len(ans) else len(strs[i])
            # temp = -1;
            if n == 0:
                return ""
            temp = n
            for j in range(n):
                if ans[j] != strs[i][j]:
                   temp = j
                   break
            ans = ans[:temp]
        return ans
