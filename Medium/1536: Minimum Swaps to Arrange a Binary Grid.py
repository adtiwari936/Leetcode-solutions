class Solution:
    def minSwaps(self, grid: List[List[int]]) -> int:
        n=len(grid)
        steps=0

        precedingZeroes_suffix = [n if 1 not in row else row[::-1].index(1) for row in grid]

        for i in range(n):
            required_zeroes=n-1-i
            j=next((j for j in range(i,n) if precedingZeroes_suffix[j]>=required_zeroes),-1)
            if j==-1:
                return -1
            for k in range(j,i,-1):
                precedingZeroes_suffix[k]=precedingZeroes_suffix[k-1]  
            steps+=j-i  
        return steps
    
