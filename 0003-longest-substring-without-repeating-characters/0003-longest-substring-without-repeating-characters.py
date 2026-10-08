class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = maxi = 0
        char = set()
        for right in range(len(s)):
            while s[right] in char:
                char.remove(s[left])
                left += 1
            char.add(s[right])
            maxi = max(maxi, right - left +1)
        return maxi