class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        for i in range(len(nums)):
            n = i + k + 1
            if i + k >= len(nums):
                n = len(nums)
            for j in range(i+1,n):
                if nums[i] == nums[j]:
                    return True
        return False