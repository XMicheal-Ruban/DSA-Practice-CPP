class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        d = {}
        for i in nums:
            d[i] = d.get(i, 0) + 1
        s = dict(sorted(d.items(), key = lambda x : x[1], reverse = True))
        ans = []
        for key, val in s.items():
            if k > 0:
                ans.append(key)
            else: break
            k -= 1
        return ans