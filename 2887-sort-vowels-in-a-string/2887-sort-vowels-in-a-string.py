class Solution:
    def sortVowels(self, s: str) -> str:
        vow=[]
        for ch in s:
            if (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U'):
                vow.append(ch)

            elif (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'):
                vow.append(ch)

        vow.sort()
        arr=list(s)
        j=0

        for i in range(len(arr)):
            if (arr[i]=='A' or arr[i]=='E' or arr[i]=='I' or arr[i]=='O' or arr[i]=='U'):
                arr[i]=vow[j]
                j+=1
            elif (arr[i]=='a' or arr[i]=='e' or arr[i]=='i' or arr[i]=='o' or arr[i]=='u'):
                arr[i]=vow[j]
                j+=1
        
        res="".join(arr)
        return res
                
