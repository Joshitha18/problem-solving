class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1;
        if (nums.size()<2) return nums.size();
        while(j<nums.size()){
            if(nums[j]!=nums[i]) nums[++i]=nums[j];
            j++;
        }
        return i+1;
    }
};