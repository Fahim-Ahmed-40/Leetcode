class Solution:
    def doesAliceWin(self, s: str) -> bool:
         cnt=0
         for i in range(len(s)):
            if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' :
                 cnt+=1

         if cnt%2==1:
            return True

         elif cnt!=0 and cnt%2 ==0:
             return True
        
         else:
            return False
        
         







        