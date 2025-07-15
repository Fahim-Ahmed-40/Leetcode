class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(int num:nums){
            if(mapp[num]>=1)return true;
            mapp[num]++;
        }
        return false;
    }
};