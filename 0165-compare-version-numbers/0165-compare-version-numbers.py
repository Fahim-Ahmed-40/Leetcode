class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=list(map(int,version1.split('.')))
        v2=list(map(int,version2.split('.')))
        if len(v1)<len(v2): 
            i=len(v1)
            while i<len(v2):
                v1.append(0)
                i+=1
        elif len(v1)>len(v2):
            i=len(v2)
            while i<len(v1):
                v2.append(0)
                i+=1
        for i in range (len(v1)):
                if v1[i]<v2[i]:
                    return -1
                elif v1[i]>v2[i]:
                    return 1
        return 0