class Solution {
public:
    bool isPowerOfThree(int n) {
        double ans;
        if(n==0) return false;
        for(int i=0;i<=31;i++){
            ans=pow(3,i);
            if(ans==n) return true;
        }
         return false;
    }
};