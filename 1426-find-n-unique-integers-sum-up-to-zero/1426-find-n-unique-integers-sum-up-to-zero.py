class Solution:
    def sumZero(self, n: int) -> List[int]:
        arr=[]
        if n%2==1:
            a=-1*int(n/2)
            for i in range (n):
                arr.append(a)
                a+=1
        else:
            a=-1*int(n/2)
            for i in range (n):
                if a!=0:
                   arr.append(a)
                else:
                   a+=1
                   arr.append(a)
                a+=1

        return arr
                                
            
       