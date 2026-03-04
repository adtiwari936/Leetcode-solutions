class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        nums.sort()
        count=0
        d={}
        for i,num in enumerate(nums):
            if num not in d:
                d[num]=i
                count+=1
        req=list(d.keys())
        for i in range(count):
            nums[i]=req[i]
        return count
