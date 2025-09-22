class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n==0 : return 1.0
        if x==0 : return 0.0
        if x==1: return 1.0
        if x==-1 and n%2==1: return -1.0
        if x==-1 and n%2==0: return  1.0
        
        if n<0:
            x=1/x
            n=-n

        ans=1.0
        
        while n>0 :
            if n%2==1:
                ans*=x
            x*=x
            n=int(n/2)
        
        return ans
        
        