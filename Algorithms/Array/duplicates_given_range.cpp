/*
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i;
        vector<int> v;
        if (nums.empty()) return nums;
        nums.resize(nums.size()+1);
        nums[nums.size()-1]=nums[0];
        
        for(i=1;i<nums.size();i++){            
            if(nums[abs(nums[i])]>0) nums[abs(nums[i])]=-nums[abs(nums[i])];
            else if (nums[abs(nums[i])]<0)
            {
                v.push_back(abs(nums[i]));
                
            }
            
        }
      return v;  
        
    }
};
