class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        arr = []
        p = len(nums1)
        q = len(nums2)
        
        # Merge both arrays (fixed: use min length + remainder)
        min_len = min(p, q)
        for i in range(min_len):
            arr.append(nums1[i])
            arr.append(nums2[i])
        # Add remaining elements
        if p > min_len:
            arr.extend(nums1[min_len:])
        if q > min_len:
            arr.extend(nums2[min_len:])
        
        arr.sort()
        r = len(arr)
        
        # Calculate median (fixed indexing)
        if r % 2 == 0:
            median = (arr[r//2 - 1] + arr[r//2]) / 2
        else:
            median = arr[r//2]
            
        return median

        
