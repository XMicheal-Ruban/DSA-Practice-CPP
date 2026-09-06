class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        myset = set(nums)
        lenght = 1
        for num in myset:
            if num-1 not in myset:
                cur = 0
                curnum = num
                while curnum in myset:
                    cur+= 1
                    curnum+= 1
                lenght = max(lenght, cur)
        return lenght
        