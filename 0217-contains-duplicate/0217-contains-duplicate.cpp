class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>New_nums(s.begin(),s.end());
        sort(nums.begin(),nums.end());
        if(nums!=New_nums) return true;
        else return false;
    }
};