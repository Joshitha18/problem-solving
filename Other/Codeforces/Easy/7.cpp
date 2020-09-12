#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;


int main() {
	 string s;
	 cin>>s;
	 int count=0;
	 int len=s.length();

	while(len>1){
		int sum=0;
		for(int i=0;i<len;i++){
			sum+=s[i]-'0';
		}
		 s=to_string(sum);
         len=s.length();
         count++;
	 }
	 cout<<count;
	return 0;
}
//https://codeforces.com/problemset/problem/102/B
