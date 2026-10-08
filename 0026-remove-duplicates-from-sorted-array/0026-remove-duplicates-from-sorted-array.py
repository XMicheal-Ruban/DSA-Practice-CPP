class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        s = sorted(list(set(nums)))
        n = len(s)
        for i in range(n):
            nums[i] = s[i]
        return n