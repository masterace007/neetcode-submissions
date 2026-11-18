class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        st = {}
        for num in nums:
            st[num] = 1 + st.get(num,0)
        n = int (len(nums)/3)

        ans = []
        
        for num in st:
            if st[num] > n:
                ans.append(num)
        return ans