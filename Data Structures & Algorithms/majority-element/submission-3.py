class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums = sorted(nums)
        idx = math.floor(len(nums)/2)
        idx = int(idx)
        return nums[idx]