#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

long long int t,x,y,k, now=0, val=0,a,b;
cin>>t;
while(t--){
  now=1;val=0;
  cin>>x>>y>>k;
  a=(y*k)+k-1;b=(x-1)*1.0;

  cout<< (a/b) + k +(a % b != 0)  <<endl;
}


return 0;
}
