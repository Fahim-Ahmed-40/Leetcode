class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        newNums=nums.copy()
        l=len(newNums)
        while l>1:
          for i in range(len(newNums)-1):
            sum=newNums[i]+newNums[i+1]
            newNums[i]=sum%10
          newNums.pop()
          l=len(newNums)
          
        return newNums[0]
        
            