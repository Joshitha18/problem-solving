//Count the number of prime numbers less than a non-negative number, n.
//sieve of eratosthenes

class Solution {
public:
    
    int countPrimes(int n) {
      int i,j,c=2;
      vector <bool> visit(n,false);        
        
        for(i=2;i*i<n;i++){
            if(visit[i]) continue;
                for(j=i*i;j<n;j+=i){
                  if(!visit[j] && j%i==0){visit[j]=true;c++;}
                }            
        }
        
        int count=n-c;
        if (count<0) count=0;
      return count;  
    }
};
