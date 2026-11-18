class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        arr_pref = [1] * len(nums)
        arr_suf = [1] * len(nums)
        
        for i in range(1,len(nums)):
            arr_pref[i] = arr_pref[i-1] * nums[i-1]
        
        for i in range(len(nums)-2,-1,-1):
            arr_suf[i] = arr_suf[i+1] * nums[i+1]
        
        ans = list()
        for i in range(len(nums)):
            ans.append(arr_pref[i] * arr_suf[i])
        return ans
