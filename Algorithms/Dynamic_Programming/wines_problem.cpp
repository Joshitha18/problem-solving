#include <iostream>
#include <climits>
using namespace std;

//Recursive solution
int Wines_Problem_rec(int a[], int i, int j, int year){
	//base case
	if (i > j) return 0;
	//recursive case
	int op1 = a[i]*year + Wines_Problem_rec(a,i+1,j,year+1);
	int op2 = a[j]*year + Wines_Problem_rec(a,i,j-1,year+1);
	return max(op1,op2);
}
//DP solution
int Wines_Problem_td(int a[], int i, int j, int year, int dp[][101]){
	//base case
	if (i > j) return 0;
	//recursive case
	//LOOK UP
	if (dp[i][j] != 0) return dp[i][j];
	
	int op1 = a[i]*year + Wines_Problem_td(a,i+1,j,year+1,dp);
	int op2 = a[j]*year + Wines_Problem_td(a,i,j-1,year+1,dp);
	return dp[i][j] = max(op1,op2);
}



int main () {

int n;
cin>>n;
int a[n],dp[101][101]={0};
for(int i=0;i<n;i++) cin>>a[i];

cout<<Wines_Problem_rec(a,0,n-1,1)<<endl;
cout<<Wines_Problem_td(a,0,n-1,1,dp)<<endl;

return 0;
}
