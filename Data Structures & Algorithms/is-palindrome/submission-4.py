class Solution:
    def isPalindrome(self, s: str) -> bool:
        t = s.lower()
        s_rev = s[::-1].lower()
        i = 0
        j = 0

        while i < len(t):
            if t[i].isalnum() and s_rev[j].isalnum():
                if t[i] != s_rev[j]:
                    return False
                j+= 1
                i+= 1
            else:
                if t[i].isalnum():
                    j += 1
                else:
                    i += 1
        return True