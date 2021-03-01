class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        types = len(set(candyType))
        return min(types, int(len(candyType)/2))
