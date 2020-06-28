#include <iostream>
#include <climits>
using namespace std;

//top down
int Coin_Change_td (int coins[],int t,int n,int dp[]){
	//base case
	if(n == 0) return 0;
	int minimum = INT_MAX;
	//Look Up
	if(dp[n] != 0) return dp[n];
	//recursive case
	for(int i=0;i<t;i++){
		if(n-coins[i]>=0){
			int sub_problem = Coin_Change_td(coins,t,n-coins[i],dp)+1;
			minimum = min(minimum,sub_problem);
		}
	}
	
	dp[n] = minimum;
	return dp[n];
}

//bottom up
int Coin_Change_bu (int coins[],int t,int n,int dp[]){
	for(int i=1;i<=n;i++) {
		int minimum = INT_MAX;
		for(int j=0;j<t;j++){
			if(i-coins[j]>=0) minimum = min(minimum,dp[i-coins[j]] + 1);
		}
	 	dp[i] = minimum;
	}	
	return dp[n];
}


int main () {
int t;
cin>>t;
int coins[t];
for(int i=0;i<t;i++) { cin>>coins[i];}
int n;
cin>>n;
int dp[n+1] = {0};
cout<<Coin_Change_td(coins,t,n,dp)<<endl;
cout<<Coin_Change_bu(coins,t,n,dp)<<endl;

return 0;
}
