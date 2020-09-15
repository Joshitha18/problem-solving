#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

int n;
cin>>n;
vector <int> dp(n+1,0);

const unsigned int M = 1000000007;
// dp[i] = how many ways to get this sum
dp[0] = 1; // there is one way to get sum 0: take nothing

for(int sum=3; sum<=n; sum++){ // what sum do we want to get
	for(int coin=3; coin<=sum; coin++){ // going through the coins, note that coins bigger than sum will not be considered because we can't get that sum using it. for example it's impossible to get sum of 5 using atleast once coin 7
		dp[sum] += dp[sum-coin];
		dp[sum] %= M; // taking mod
	}
}
cout << dp[n]<<endl;

return 0;
}
