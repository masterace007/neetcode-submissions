class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        arr1 = {}
        arr2 = {}
        for ch in s:
            if ch in arr1:
                arr1[ch] += 1
            else:
                arr1[ch] = 1
        for ch in t:
            if ch in arr2:
                arr2[ch] += 1
            else:
                arr2[ch] = 1
        
        return arr1 == arr2