#include <bits/stdc++.h>
#include <iostream>

using namespace std;

    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return {nums[1], nums[0]};
        vector <int> l(n,0);
        vector <int> r(n,0);
        vector <int> ans(n,0);
        
        l[0]=nums[0];
        for(int i=1;i<n;i++) {
            l[i]=nums[i]*l[i-1];
        }
        
        r[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--) {
            r[i]=nums[i]*r[i+1];
        }
        
        for(int i=0;i<n;i++){
            if(i==0) ans[i]=r[i+1];
            else if(i==nums.size()-1) ans[i]=l[i-1];
            else ans[i]=r[i+1]*l[i-1];
        }
    return ans;
    }

int main(){
  vector<int> nums{2, 5, 3, 6};
  vector<int> res = productExceptSelf(nums);
  cout << "Results\n";
  for (int r: res){
    cout << r << endl;
  }
}
