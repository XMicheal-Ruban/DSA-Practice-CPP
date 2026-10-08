class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        s = sorted(list(set(nums)))
        #s.update(nums)
        n = len(s)
        for i in range(0, n):
            nums[i] = s[i]
        return n