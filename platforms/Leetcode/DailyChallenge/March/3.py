class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum1 = sum(nums)
        n = len(nums)
        return int((n*(n+1))/2 - sum1)
        
