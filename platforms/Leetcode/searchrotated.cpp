class Solution {
public:
    
//To find pivot
int pivotSearch(vector<int>& nums, int l, int r,int x) { 
    
   if (l <= r) { 
      int mid = (l + r)/2;
       
     if((mid != 0)&&(mid!=x)){
//to check if pivot is mid
      if (nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1])   
             return mid ;
      if(mid+1==x && nums[mid]>nums[mid+1]){return mid+1;}
     }
//to check if pivot is either first/last element
     else if(mid==0 && nums[mid]<nums[mid+1])return mid ;
     else if(mid==0 && nums[mid]>nums[mid+1])return mid+1 ;
     else if(mid==x && nums[mid]<nums[mid-1])return mid ;
//if pivot is not mid, check if pivot is in first half or second half of array
      if (nums[mid] < nums[0])  
      {  return pivotSearch(nums, l, mid, x);  }
//check if array is in ascending order
      if (nums[mid] > nums[0] && nums[mid]>nums[x])
      {    return pivotSearch(nums, mid, r, x); }
      if (nums[mid] > nums[0] && nums[mid]<nums[x])
      {    return 0; }
   } 
    return -1;
}

//to search element
int binarySearch(vector<int>& nums, int l, int r, int x) { 
   if (l <= r) {        
      int mid = (l + r)/2;       
      if (nums[mid] == x)   
             return mid ;
      if (nums[mid] > x)  
             return binarySearch(nums, l, mid-1, x);            
      if (nums[mid] < x)
             return binarySearch(nums, mid+1, r, x); 
   } 
   return -1; 
}
    
    
int search(vector<int>& nums, int target) {
        int n=nums.size();
        int m;
//array size 0
    if (n==0){return -1;}
//array size 1
    if (n==1 && nums[0]==target){m=0;return m;}
    else if (n==1 && nums[0]!=target){return -1;}   
//array size>1
        int pivot=pivotSearch(nums,0,n-1,n-1);
//pivot is first element(array in ascending orde)
    if(pivot==0){
            return binarySearch(nums,0,n-1,target);
        }
//pivot is last element
     else if(pivot==(n-1)){
            if(target==nums[n-1]) return n-1;
            else return binarySearch(nums,0,n-2,target);
        }
//pivot is in between
      else {
            int a=binarySearch(nums,0,pivot-1,target);
//if pivot not in first subarray, search in second
            if(a<0){
                return binarySearch(nums,pivot,n-1,target);
            }
            else return a;
        }
      return -1;  
    }
};
