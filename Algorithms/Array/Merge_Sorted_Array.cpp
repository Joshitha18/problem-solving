/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

    The number of elements initialized in nums1 and nums2 are m and n respectively.
    You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       auto itr=nums1.begin();
        advance(itr,m);
        nums1.erase(itr,nums1.end());
        
         int i,j,k;       
            i = 0;
            j = 0; 
            k = 0; 
            
    while (i < m && j < n) {
        
        if (nums1[k] <= nums2[j]) { 
             i++;
        }
        
        else{
            auto iter=nums1.begin();
            advance(iter,k);
            nums1.insert(iter,nums2[j]);
            j++;
        } 
        k++;
    } 

    while (j < n) { 
            auto iter=nums1.begin();
            advance(iter,k);
            nums1.insert(iter,nums2[j]);        
        j++; 
        k++; 

         }
    }
};
