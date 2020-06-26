//finding no.of set bits
#include <iostream>
using namespace std;


//O(logn) time
int count(int n){
	int ans=0;
	while(n>0){
		ans += n & 1;
		n = n >> 1;
	}
	return ans;
}

//O(no. of set bits) time
int countfast(int n){
	int ans=0;
	while(n>0){
		n = n & (n-1);
		ans++;
	}
	return ans;
}



int main() {
	cout<<count(13)<<endl;
	cout<<countfast(13)<<endl;
	cout<<__builtin_popcount(13)<<endl;
	
return 0;
}
