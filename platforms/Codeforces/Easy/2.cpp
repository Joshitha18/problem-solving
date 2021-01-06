#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

int t;
cin>>t;
while (t--){
  long long int n;
  cin>>n;
  if(n<2) cout<<"0"<<endl;
  else {
    if(n%2==0) cout<<(n-1)/2<<endl;
    else cout<<n/2<<endl;
  }
}

return 0;
}
//https://codeforces.com/problemset/problem/1335/A
