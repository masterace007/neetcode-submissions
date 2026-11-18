class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        arr = set()
        for num in nums:
            arr.add(num)
        arr_list = list(arr)
        arr_list = sorted(arr_list)
        count = 0
        ans = 0
        for i in range(0,len(arr_list),1):
            if i != 0 and arr_list[i] == arr_list[i-1] + 1:
                count+=1
            else:
                ans = max(ans,count)
                count = 1
        ans = max(ans,count)
        return ans
