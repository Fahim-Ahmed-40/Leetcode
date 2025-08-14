class Solution(object):
    def largestGoodInteger(self, num):
        if(len(num)<3):
            return ""
        max_digit=''
        for i in range(2,len(num)):
            if num[i]==num[i-1]==num[i-2]:
                max_digit=max(max_digit,num[i])
        return max_digit*3 if max_digit else ""
            
            
        
        