/*
Given an array A of integers, return the number of (contiguous, non-empty) subarrays that have a sum divisible by K.

Approach/Hint:(b-a)%k=0 -> b%k=a%k
for where b%k=a%k in cumulative sum array. If b%k=a%k=1 && frequency(1)=m, (mC2) i.e., m*(m-1)/2 subarrays
*/

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        vector <int> freq(K,0);
        int sum=0,i;
        freq[0]=1;
        for(i=0;i<A.size();i++){
            sum+=A[i];
            sum%=K;
            sum=(sum+K)%K;
            freq[sum]+=1;
        }
        int ans=0;
        for(i=0;i<K;i++){
            ans+=(freq[i]*(freq[i]-1))/2;
        }
        return ans;
    }
};
