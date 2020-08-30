/*
Given an integer n and an integer start.

Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums
*/

class Solution {
public:
    int calculate(int a, int b){
        return a^b;
    }
    
    int xorOperation(int n, int start) {
    int k=start,i;
    for(i=1;i<n;i++){
       k= calculate(k,start+2*i);
    }        
     return k;       
    }
};
