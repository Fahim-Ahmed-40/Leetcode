class Solution:
    def getNoZeroIntegers(self, n: int) -> List[int]:
        def find0(x):
            if '0' not in str(x):
                return True

        for i in range(1,n):
            j=n-i
            if find0(i) and find0(j):
                return [i,j]
        