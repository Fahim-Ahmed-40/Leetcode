class Solution:
    def doesAliceWin(self, s: str) -> bool:
         arr=str(s)
         ind=[]
         cnt=0
         for i in range(len(arr)):
            if arr[i]=='a' or arr[i]=='e' or arr[i]=='i' or arr[i]=='o' or arr[i]=='u' :
                ind.append(i)
                cnt+=1

         if cnt%2==1:
            return True

         elif cnt!=0 and cnt%2 ==0:
             return True
        
         else:
            return False
        
         







        