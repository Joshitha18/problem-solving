class Solution {
public:
    
    int bin_search_low(vector<int>& nums, int low, int high, int x, int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2;
        
        if ((mid == 0 || x > nums[mid - 1]) && nums[mid] == x) 
            return mid; 
        else if (x > nums[mid]) 
            return bin_search_low(nums, (mid + 1), high, x,n); 
        else
            return bin_search_low(nums, low, (mid - 1), x,n); 
    } 
    return -1; 
} 
    
      int  bin_search_high(vector<int>& nums, int low, int high, int x,int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2;
        int f=0;
        if(mid<n)f=1;
       // cout<<mid<<endl;
        if ((mid == n  && nums[mid] == x) ||  (f==1 && x < nums[mid + 1] && nums[mid] == x))
            return mid; 
        else if (x >= nums[mid]) 
            return bin_search_high(nums, (mid + 1), high, x,n); 
        else
            return bin_search_high(nums, low, (mid - 1), x,n); 
    } 
    return -1; 
} 
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a(2);
      a[0]=  bin_search_low(nums,0,nums.size()-1,target,nums.size()-1);
      a[1]=  bin_search_high(nums,0,nums.size()-1,target,nums.size()-1);
        return a;
    }
};
