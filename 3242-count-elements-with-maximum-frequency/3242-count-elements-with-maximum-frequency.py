class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        st = set(nums)
        arr = []
        maxx = 0
        for num in st:
           freq = nums.count(num)
           if freq>maxx:
                maxx=freq
                cnt=1
           elif freq==maxx:
                cnt+=1

        return cnt*maxx
                
        
