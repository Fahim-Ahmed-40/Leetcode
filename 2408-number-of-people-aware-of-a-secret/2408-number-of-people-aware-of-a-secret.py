class Solution:
    def peopleAwareOfSecret(self, n: int, delay: int, forget: int) -> int:
        mod=10**9 +7
        arr=[0]*(n+1)
        arr[1]=1
        shared=0
        for i in range(2,n+1):
            if(i-delay)>0:
                shared=(shared+arr[i-delay]) % mod
            if(i-forget)>0:
                shared= (shared-arr[i-forget]+mod)%mod
            arr[i]=shared
        
        total=0
        for i in range (n-forget+1,n+1):
            total=(total+arr[i])%mod
        
        return total