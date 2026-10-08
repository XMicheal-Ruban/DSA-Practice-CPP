class Solution:
    def firstMissingPositive(self, nums: list[int]) -> int:
        d = {}
        for x in nums:
            if x > 0:
                d[x] = 1
        i = 1
        while True:
            if i not in d:
                return i
            i+= 1
        return 0