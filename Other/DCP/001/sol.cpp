#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool twoSum(vector<int>& nums, int target) {
        unordered_map<int, bool> umap;
        for(auto x:nums) {
            if(umap.find(target-x)!=umap.end()) 
                return true;
            umap[x]=true;
        }
        return false;
    }
};

int main(){
  vector<int> nums{3,2,4};
  int target = 6;
  Solution sol;
  cout << sol.twoSum(nums, target);
}

