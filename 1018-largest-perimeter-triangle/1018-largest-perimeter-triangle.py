class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        
        for i in range (n-1,1,-1):
            x,y,z=nums[i-2],nums[i-1],nums[i]
            if x+y>z:
                return x+y+z
        return 0


