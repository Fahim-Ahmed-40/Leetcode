class Solution(object):
    def maximum69Number (self, num):
        """
        :type num: int
        :rtype: int
        """
        ind=0
        flag=0
        s=str(num)
        for i in range(len(s)):
            if(s[i]=='6'):
                ind=i
                flag=1
                break
        ind+=1
        if flag==1: 
            num+=3*(10**(len(s)-ind))
        return num
        