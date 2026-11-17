class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        arr = {}
        for ch in strs:
            ch1 = "".join(sorted(ch))
            if ch1 in arr:
                arr[ch1].append(ch)
            else:
                arr[ch1] = []
                arr[ch1].append(ch)
        ans = []
        for value in arr.values():
            ans.append(value)
        return ans

