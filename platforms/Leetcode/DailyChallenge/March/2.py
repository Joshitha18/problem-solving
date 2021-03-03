class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        req = []
        uniList = list(set(nums))
        sum1 = sum(nums)
        sum2 = sum(uniList)
        req.append(sum1-sum2)
        req.append(int(((len(nums)*(len(nums)+1))/2)-sum2))
        return req
