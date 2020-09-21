#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {

int n,k,a,b,val=0;
cin>>n>>k;
unordered_map<int,int> umap;

for(int i=0;i<k;i++){
   cin>>a>>b;
   for(int j=a;j<=b;j++){
   umap[j]=1;
 }
}


vector <int> dp(n+1,0);
dp[1]=1;

for(int i=2;i<=n;i++){
  for(int j=1;j<i;j++){
    if(umap.find(i-j) != umap.end()) {
    dp[i] += dp[j];
    dp[i] = dp[i] % 998244353;
   }
  }
}
cout<<dp[n]<<endl;

  return 0;
}
