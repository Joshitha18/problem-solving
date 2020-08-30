class Solution {
public:
    int climbStairs(int n) {
        n=n+1;
        int fb;
      double phi=(1+sqrt(5))/2; 
        
        fb= (pow(phi,n)-(pow(-phi,-n)))/sqrt(5);
        return fb;
        
    }
};
