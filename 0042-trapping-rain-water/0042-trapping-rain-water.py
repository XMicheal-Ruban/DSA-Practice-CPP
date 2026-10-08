class Solution:
    def trap(self, height: list[int]) -> int:
        peak = height.index(max(height))
        temp = height[0]
        ans = 0
        for i in range(peak):
            if temp < height[i]:
                temp = height[i]
            ans+= temp
            print(temp)
        temp = 0
        for i in range (len(height)-1, peak-1, -1):
            temp = max(temp, height[i])
            print(temp)
            ans+= temp
        for x in height:
            ans-= x
        return ans