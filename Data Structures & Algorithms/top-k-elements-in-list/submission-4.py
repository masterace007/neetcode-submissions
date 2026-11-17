class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        arr = {}
        for num in nums:
            if num not in arr:
                arr[num] = 1
            else:
                arr[num] += 1
        temp_ans = list()
        for key,value in arr.items():
            temp_ans.append([value,key])
        temp_ans = sorted(temp_ans, reverse=True)
        
        ans = list()
        for i in range(k):
            ans.append(temp_ans[i][1])
        return ans