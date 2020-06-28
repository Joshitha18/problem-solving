/*
Steps for n -> 1
 n -> n/3, if (n%3 is 0)
 n -> n/2, if (n%2 is 0)
 n -> n-1
*/
#include <iostream>
#include <climits>
using namespace std;

//top down approach
int Min_Steps_td (int n, int dp[]) {
	//base case
	if(n == 1) return 0;
	//recursion case
	//Look Up
	if(dp[n] != 0) return dp[n];
	//else
	int option1, option2, option3;
	option1 = option2 = option3 = INT_MAX; 
	
	if(n%3 == 0) option1 = Min_Steps_td(n/3, dp) + 1;
	
	if(n%2 == 0) option2 = Min_Steps_td(n/2, dp) + 1;
	
	option3 = Min_Steps_td(n-1, dp) + 1;
	
	int ans = min(min(option1, option2), option3);
	return dp[n] = ans;
}

//Bottom Up approach
int Min_Steps_bu (int n, int dp[]) {

	for(int i=2;i<=n;i++){	
	int option1, option2, option3;
	option1 = option2 = option3 = INT_MAX;
	
	if(i%3 == 0) option1 = dp[i/3] + 1;
	
	if(i%2 == 0) option2 = dp[i/2] + 1;
	
	option3 = dp[i-1] + 1;	
	
	int ans = min(min(option1, option2), option3);
	dp[i] = ans;		
	}
	return dp[n];
}



int main () {

int n;
cin>>n;
int dp[n+1]={0};
cout<<Min_Steps_td(n,dp)<<endl;
cout<<Min_Steps_bu(n,dp)<<endl;

return 0;
}
